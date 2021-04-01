#include <bits/stdc++.h> //using lomuto partition
using namespace std;
class Solution
{
public:
    int partition(int arr[], int l, int h)
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
        return (i + 1);
    }
    void quickSort(int arr[], int l, int h)
    {
        if (l < h)
        {
            int p = partition(arr, l, h);
            quickSort(arr, l, p - 1);
            quickSort(arr, p + 1, h);
        }
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
    int arr[] = {4, 10, 3, 78, 15, 30, 89, 1, 60, 50};
    int n = sizeof(arr) / 4;
    obj1.quickSort(arr, 0, n - 1);
    obj1.printArr(arr, n);
}