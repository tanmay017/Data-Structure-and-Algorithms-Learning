#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int fib(int n)
    {
        if(n == 0) return 0;
        if(n==1) return 1;
        return fib(n-1)+fib(n-2);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solution obj1;
    int n;
    cin>>n;
    int res = obj1.fib(n);
    cout<<res;
    return 0;
}