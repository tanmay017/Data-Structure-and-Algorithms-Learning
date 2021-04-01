#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minDiff(int arr[], int n, int m)
    {
        if (m > n)
            return -1;
        sort(arr, (arr + n));
        int res = INT_MAX;
        for (int i = 0; i <= n - m; i++)
        {
            res = min(res, (arr[i + m - 1] - arr[i]));
        }
        return res;
    }
};
int main()
{
    Solution obj1;
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(arr) / 4;
    int m = 3;
    cout << obj1.minDiff(arr, n, m);
}