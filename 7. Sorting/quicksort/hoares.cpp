#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int partition(int arr[], int l, int h)
    {
        int pivot = arr[l];
        int i = l - 1;
        int j = h + 1;
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
    void printArr(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
};
int main()
{
    Solution obj;
    int arr[] = {70, 80, 30, 90, 40, 50, 10};
    int n = sizeof(arr) / 4;
    cout << obj.partition(arr, 0, 6) << "\n";
    obj.printArr(arr, n);
}