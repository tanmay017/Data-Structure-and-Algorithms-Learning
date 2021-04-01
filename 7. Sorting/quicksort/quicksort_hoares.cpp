#include <bits/stdc++.h> //using hoares partition
using namespace std;
class Solution
{
public:
    int partition(int arr[], int l, int h)
    {
        int i = l - 1;
        int j = h + 1;
        int pivot = arr[l];
        while (true)
        {
            do
            {
                i++;
            } while (arr[i] < pivot);
            do
            {
                j--;
            } while (arr[j] > pivot);
            if (i >= j)
                return j;
            swap(arr[i], arr[j]);
        }
    }
    void quickSort(int arr[], int l, int h)
    {
        if (l < h)
        {
            int p = partition(arr, l, h);
            quickSort(arr, l, p);
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