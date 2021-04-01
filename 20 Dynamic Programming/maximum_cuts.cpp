#include <bits/stdc++.h>
using namespace std;

int maxi(int a,int b,int c)
{
    return max(a,max(b,c));
}
int maxCuts_DP(int n,int a,int b,int c) //Dynamic Solution O(N) time and O(N) Aux Space
{
    int dp[n+1];
    dp[0] = 0;
    for(int i = 1;i <= n;i++)
    {
        dp[i] = -1;
        if(i-a >= 0) 
            dp[i] = max(dp[i],dp[i-a]);
        if(i-b >= 0) 
            dp[i] = max(dp[i],dp[i-b]);
        if(i-c >= 0) 
            dp[i] = max(dp[i],dp[i-c]);
        if(dp[i] != -1)
            dp[i]++;
    }
    return dp[n];
}
int maxCuts_rec(int n,int a,int b,int c) //Recusive Solution O(3^N) time (exponential time)
{
    if(n < 0) return -1;
    if(n == 0) return 0;
    int res = maxi(maxCuts_rec(n-a,a,b,c),
                   maxCuts_rec(n-b,a,b,c),
                   maxCuts_rec(n-c,a,b,c));
    if(res == -1) 
        return res;
    else 
        return (res + 1);
}
int main()
{
    int n = 23;
    int a = 13;
    int b = 11;
    int c = 12;
    cout<<maxCuts_DP(n,a,b,c);
}