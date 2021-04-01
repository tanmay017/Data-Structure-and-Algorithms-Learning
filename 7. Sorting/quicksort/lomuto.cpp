#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void lomutoPart(int arr[], int l, int h)
    {
        int i = l - 1;
        int pivot = arr[h];
        for (int j = l; j < h; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[h]);
    }
    void printArr(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
};
int main()
{
    Solution obj1;
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / 4;
    obj1.lomutoPart(arr, 0, n - 1);
    obj1.printArr(arr, n);
}