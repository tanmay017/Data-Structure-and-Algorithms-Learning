#include <bits/stdc++.h>
using namespace std;

int counter = 0;
void printArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
bool isSpecial(int x, int y)
{
    double sq = sqrt(x + y);
    return (floor(sq) - sq == 0);
}
void printPermu(vector<int> &arr, int s = 0)
{
    if (s > 1 && !isSpecial(arr[s - 1], arr[s - 2]))
        return;
    if (s == arr.size() - 1)
    {
        if (isSpecial(arr[s], arr[s - 1]))
        {
            printArr(arr);
            counter++;
        }
        return;
    }
    unordered_set<int> mp;
    for (int i = s; i < arr.size(); i++)
    {
        if (!mp.count(arr[i]))
        {
            mp.insert(arr[i]);
            swap(arr[s], arr[i]);
            printPermu(arr, s + 1);
            swap(arr[s], arr[i]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    printPermu(arr);
    cout << counter << endl;
}