#include <bits/stdc++.h>
using namespace std;

void counting_sort(int arr[], int n1)
{
    int mini = arr[0];
    int maxi = arr[0];
    for (int i = 1; i < n1; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    int n2 = maxi - mini + 1;
    int freq[n2];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n1; i++)
        freq[arr[i] - mini]++;
    int j = 0;
    for (int i = 0; i < n2; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i + mini;
            j++;
            freq[i]--;
        }
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    counting_sort(arr, n);
    printArr(arr, n);
}