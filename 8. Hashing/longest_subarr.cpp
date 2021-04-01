#include <bits/stdc++.h> //This program is used to find Longest Subarray wit hgiven sum
using namespace std;
class Solution
{
public:
    int longestSub(int arr[], int n, int sum)
    {
        unordered_map<int, int> m;
        int pre_sum = 0;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            pre_sum += arr[i];
            if (pre_sum == sum)
                res = i + 1;
            if (m.find(pre_sum) == m.end())
                m.insert({pre_sum, i});
            if (m.find(pre_sum - sum) != m.end())
                res = max(res, (i - m[pre_sum - sum]));
        }
        return res;
    }
};
int main()
{
    Solution obj;
    int arr[] = {8, 3, 1, 5, -6, 6, 2, 2};
    int n = sizeof(arr) / 4;
    int sum = 4;
    cout << obj.longestSub(arr, n, sum);
}