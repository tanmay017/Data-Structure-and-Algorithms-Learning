#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int sumofN(int n)
    {
        if(n == 0) return 0;
        return n+sumofN(n-1);
    }
};

int main()
{
    Solution obj1;
    int res;
    res = obj1.sumofN(10);
    cout<<res;
    return 0;
}