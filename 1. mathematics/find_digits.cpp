#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int digitCount(int num)
    {
        return floor(log10(num) + 1);
    }
};

int main()
{
    Solution obj1;
    int num = 891563;
    int digit = obj1.digitCount(num);
    cout<<digit;
}