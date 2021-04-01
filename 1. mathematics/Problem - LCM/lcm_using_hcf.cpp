#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int gcd(int a,int b)
    {
        if(b == 0) return a;
        else return gcd(b,a%b);
    }
    int lcm(int a,int b)
    {
        return (a*b)/gcd(a,b);
    }
};

int main()
{
    Solution obj1;
    int a = 12;
    int b = 9;
    int res = obj1.lcm(a,b);
    cout<<res;
}