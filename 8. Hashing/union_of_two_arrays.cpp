#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countUnion(int a[], int b[], int n, int m)
    {
        unordered_set<int> s(a, a + n);
        for (int i = 0; i < m; i++)
            s.insert(b[i]);
        return s.size();
    }
};
int main()
{
    Solution obj1;
    int a[] = {15, 20, 5, 15};
    int b[] = {15, 15, 15, 20, 10};
    int n = sizeof(a) / 4;
    int m = sizeof(b) / 4;
    cout << "The size of unions are : " << obj1.countUnion(a, b, n, m);
}