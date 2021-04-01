#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int partition(int arr[], int l, int h)
    {
        int pivot = arr[h];
        int i = l - 1;
        for (int j = l; j <= h - 1; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[h]);
        return i + 1;
    }

public:
    int kthSmallest(int arr[], int n, int k)
    {
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int p = partition(arr, l, r);
            if (p == k - 1)
                return p;
            else if (p > k - 1)
                r = p - 1;
            else
                l = p + 1;
        }
        return -1;
    }
};

int main()
{
    Solution obj1;
    int arr[] = {70, 80, 40, 90, 20, 10, 30, 50, 60};
    int n = sizeof(arr) / 4;
    int k = 2;
    int index = obj1.kthSmallest(arr, n, k);
    cout << arr[index];
}
