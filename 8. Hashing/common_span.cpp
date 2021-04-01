#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longComSpanSum(int a[], int b[], int n)
    {
        int c[n];
        for (int i = 0; i < n; i++)
            c[i] = a[i] - b[i];
        unordered_map<int, int> m;
        int res = 0;
        int pre_sum = 0;
        for (int i = 0; i < n; i++)
        {
            pre_sum += c[i];
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
    int a[] = {0, 1, 0, 0, 0, 0};
    int b[] = {1, 0, 1, 0, 0, 1};
    int n = sizeof(a) / 4;
    cout << obj.longComSpanSum(a, b, n);
}