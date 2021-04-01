#include <bits/stdc++.h> //In this DP is better if and only if value of W is not too much 
using namespace std;

int knapSack_dp(int W,int wt[],int val[],int n) //DP Solution takes O(W*N) time
{
    int dp[n+1][W+1];
    for(int i = 0;i <= n;i++)
        dp[i][0] = 0;
    for(int i = 0;i <= W;i++)
        dp[0][i] = 0;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= W;j++)
        {
            if(wt[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else 
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]],dp[i-1][j]);
        }
    }
    return dp[n][W];
}
int knapSack_rec(int W,int wt[],int val[],int n) //Recusive Solution takes O(2^N) time
{
    if(n == 0 || W == 0)
        return 0;
    if(wt[n-1] > W)
        return knapSack_rec(W,wt,val,n-1);
    else 
        return max(knapSack_rec(W,wt,val,n-1),val[n-1] + knapSack_rec(W-wt[n-1],wt,val,n-1));
}

int main()
{
    int W = 10;
    int wt[] = {5,4,6,3};
    int val[] = {10,40,30,50};
    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<"Maximum Value that can be brought up : "<<knapSack_dp(W,wt,val,n);
}