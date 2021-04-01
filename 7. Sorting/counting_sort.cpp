#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void printArr(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    void cSort(int arr[], int n, int k)
    {
        int count[k];
        for (int i = 0; i < k; i++)
            count[i] = 0;
        for (int i = 0; i < n; i++)
            count[arr[i]]++;
        for (int i = 1; i < k; i++)
            count[i] = count[i - 1] + count[i];
        int output[n];
        for (int i = n - 1; i >= 0; i--) //We doing this in reverse fasion to maintain stability
        {
            output[count[arr[i]] - 1] = arr[i];
            count[arr[i]]--;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = output[i];
        }
    }
};
int main()
{
    Solution obj1;
    int arr[] = {1, 4, 4, 1, 0, 1};
    int n = sizeof(arr) / 4;
    obj1.cSort(arr, n, 5);
    obj1.printArr(arr, n);
}