#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int trailingZeros(int num)
    {
        int count = 0;
        for(int i = 5;i <= num;i *= 5)
        {
            count += num/i;
        }
        return count;
    }
};

int main()
{
    Solution obj1;
    int num = 100;
    int res = obj1.trailingZeros(num);
    cout<<res;
}