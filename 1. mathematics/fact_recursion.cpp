#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int fact(int n)
    {
        if(n == 0) return 1;
        return n*fact(n-1);
    }
};

int main()
{
    Solution obj1;
    int n = 5;
    int factorial = obj1.fact(n);
    cout<<factorial;
}