#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isZeroSum(int arr[], int n)
    {
        unordered_set<int> s;
        int pre_sum = 0;
        for (int i = 0; i < n; i++)
        {
            pre_sum += arr[i];
            if (s.find(pre_sum) != s.end())
                return true;
            if (pre_sum == 0)
                return true;
            s.insert(pre_sum);
        }
        return false;
    }
};
int main()
{
    Solution obj;
    int arr[] = {-3, 4, -3, -1, 1};
    int n = sizeof(arr) / 4;
    if (obj.isZeroSum(arr, n))
        cout << "Yes";
    else
        cout << "No";
}