#include <bits/stdc++.h> //find HCF or GCD
using namespace std;

class Solution
{
    public:
    int gcd(int a,int b)
    {
        while(a!=b)
        {
            if(a>b) a -= b;
            else b-= a;
        }
        return a;
    }
};

int main()
{
    Solution obj1;
    int a = 16;
    int b = 12;
    int res = obj1.gcd(a,b);
    cout<<res;
}