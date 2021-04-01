#include <bits/stdc++.h> //Coin Change Count Combination
using namespace std;

int getCount(int coins[],int n,int sum) //dynamic programming function
{
    int dp[sum+1][n+1];
    for(int i = 0;i <= n;i++)
        dp[0][i] = 1;
    for(int i = 1;i <= sum;i++)
        dp[i][0] = 0;
    for(int i = 1;i <= sum;i++)
        for(int j = 1;j <= n;j++)
        {
            dp[i][j] = dp[i][j-1];
            if(coins[j-1] <= i)
                dp[i][j] = dp[i][j] + dp[i-coins[j-1]][j];
        }
    return dp[sum][n];
}

int getCount_Rec(int coins[],int n,int sum) //Recusive function
{
    if(sum == 0)
        return 1;
    if(n == 0)
        return 0;
    int res = getCount_Rec(coins,n-1,sum);
    if(coins[n-1] <= sum)
        res = res + getCount_Rec(coins,n,sum - coins[n-1]);
    return res;
}
int main()
{
    int coins[] = {1,2,3};
    int n = 3;
    int sum = 4;
    cout<<getCount(coins,n,sum);
}