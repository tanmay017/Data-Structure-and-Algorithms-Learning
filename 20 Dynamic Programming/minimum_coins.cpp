#include <bits/stdc++.h> //could be solved by greedy but it doesnt give right answer always
using namespace std;

int getMin_DP(int coins[],int n,int val) //dynamic programming solution
{
    int dp[val+1];
    dp[0] = 0;
    for(int i = 1;i <= val;i++)
        dp[i] = INT_MAX;
    for(int i = 1;i <= val;i++)
        for(int j = 0;j < n;j++)
        {
            if(coins[j] <= i)
            {
                int sub_res = dp[i-coins[j]];
                if(sub_res != INT_MAX && sub_res + 1 < dp[i])
                    dp[i] = sub_res + 1; 
            }
        }
    return dp[val];
}
int getMin_Rec(int coins[],int n,int val) //recursive solution
{
    if(val == 0)
        return 0;
    int res = INT_MAX;
    for(int i = 0;i < n;i++)
    {
        if(coins[i] <= val)
        {
            int sub_res = getMin_Rec(coins,n,val-coins[i]);
            if(sub_res != INT_MAX)
                res = min(res,sub_res+1);
        }
    }
    return res;
}
int main()
{
    int coins[] = {9,6,5,1};
    int n = sizeof(coins)/sizeof(coins[0]);
    int val = 11;
    cout<<getMin_DP(coins,n,val);
}