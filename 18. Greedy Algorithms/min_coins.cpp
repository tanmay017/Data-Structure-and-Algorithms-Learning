#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int min_coins(int coins[],int n,int amount)
    {
        int res = 0;
        sort(coins,coins+n,greater<int>());
        for(int i = 0;i < n;i++)
        {
            if(coins[i] <= amount)
            {
                int c = floor(amount / coins[i]);
                res += c;
                amount = amount - (c*coins[i]);
            }
            if(amount == 0)
                break;
        }
        return res;
    }
};

int main()
{
    Solution obj;
    int coins[]  = {5,1,10,2};
    int amount  = 52;
    cout<<obj.min_coins(coins,4,amount);
}