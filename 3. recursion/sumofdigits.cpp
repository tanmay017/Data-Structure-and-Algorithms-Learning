#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int sumOfDigits(int n)
    {
        if(n<10) return n;
        return sumOfDigits(n/10) + n%10;
    }
};

int main()
{
    Solution obj1;
    cout<<obj1.sumOfDigits(1122);
    return 0;
}