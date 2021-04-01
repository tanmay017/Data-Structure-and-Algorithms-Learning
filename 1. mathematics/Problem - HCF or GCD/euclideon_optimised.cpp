#include <bits/stdc++.h> //find HCF or GCD problem optimistic approach
using namespace std;
class Solution
{
    public:
    int gcd(int a,int b)
    {
        if(b == 0) return a;
        else return gcd(b,a%b);
    }
};

int main()
{
    Solution obj1;
    int a = 25;
    int b = 5;
    int res = obj1.gcd(a,b);
    cout<<res;
}