#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void partition(int arr[], int l, int h, int p)
    {
        int temp[h - l + 1];
        int index = 0;
        for (int i = l; i <= h; i++)
        {
            if (arr[i] <= arr[p])
            {
                temp[index] = arr[i];
                index++;
            }
        }
        for (int i = l; i <= h; i++)
        {
            if (arr[i] > arr[p])
            {
                temp[index] = arr[i];
                index++;
            }
        }
        for (int i = l; i <= h; i++)
            arr[i] = temp[i - l];
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
    int arr[] = {3, 2, 8, 12, 4, 6, 7, 10, 12};
    int n = sizeof(arr) / 4;
    obj1.partition(arr, 0, (n - 1), 6);
    obj1.printArr(arr, n);
}