#include <bits/stdc++.h> //remember brian and Krningham  algo
using namespace std;
class Solution
{
    public:
    bool isPowerTwo(int n)
    {
        if(n==0) return false;
        return ((n&(n-1))==0);
    }
};

int main()
{
    Solution obj1;
    if(obj1.isPowerTwo(12)) cout<<"Yes";
    else cout<<"No";
}