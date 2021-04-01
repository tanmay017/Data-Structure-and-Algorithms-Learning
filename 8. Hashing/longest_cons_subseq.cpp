#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxlenOfCon(int arr[], int n)
    {
        unordered_set<int> s(arr, arr + n);
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.find(arr[i] - 1) == s.end())
            {
                int curr = 1;
                while (s.find(curr + arr[i]) != s.end())
                    curr++;
                res = max(res, curr);
            }
        }
        return res;
    }
};
int main()
{
    Solution obj;
    int arr[] = {9, 13, 3, 7, 5, 22, 6, 1};
    int n = sizeof(arr) / 4;
    cout << obj.maxlenOfCon(arr, n);
}