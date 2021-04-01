#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int intersection(int a[], int b[], int n, int m)
    {
        unordered_set<int> s;
        int res = 0;
        for (int i = 0; i < n; i++)
            s.insert(a[i]);
        for (int j = 0; j < m; j++)
        {
            if (s.find(b[j]) != s.end()) //whole concept relies on this
            {
                res++;
                s.erase(b[j]);
            }
        }
        return res;
    }
};
int main()
{
    Solution obj;
    int a[] = {9, 5, 1, 3, 8, 7, 4, 1, 1};
    int b[] = {11, 15, 1, 10, 9, 1, 9, 13};
    int n = sizeof(a) / 4;
    int m = sizeof(b) / 4;
    cout << "Numbers of intersections are: " << obj.intersection(a, b, n, m);
}