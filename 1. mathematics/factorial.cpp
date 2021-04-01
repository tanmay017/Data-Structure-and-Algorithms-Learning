#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int fact(int n)
    {
        int factorial = 1;
        if (n == 0) return 1;
        for(int i = n;i > 0;i--)
        {
            factorial *= i;
        }
        return factorial;
    }
};

int main()
{
    Solution obj1;
    int n = 6;
    int factorial = obj1.fact(n);
    cout<<factorial;
}