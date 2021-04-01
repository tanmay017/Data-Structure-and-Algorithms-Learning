#include <bits/stdc++.h> //The task is to find the longest subarray with equal number of 0's and 1's
using namespace std;
class Solution
{
public:
    int equal0and1(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            if (arr[i] == 0)
                arr[i] = -1;
        unordered_map<int, int> m;
        int res = 0;
        int pre_sum = 0;
        for (int i = 0; i < n; i++)
        {
            pre_sum += arr[i];
            if (pre_sum == 0)
                res = i + 1;
            if (m.find(pre_sum) == m.end())
                m.insert({pre_sum, i});
            if (m.find(pre_sum) != m.end())
                res = max(res, i - m[pre_sum]);
        }
        return res;
    }
};
int main()
{
    Solution obj;
    int arr[] = {1, 0, 1, 1, 1, 0, 0};
    int n = sizeof(arr) / 4;
    cout << obj.equal0and1(arr, n);
}