#include <bits/stdc++.h>
using namespace std;

int minJumps_DP(int arr[],int n) //dynamic solution
{
    int dp[n+1];
    dp[0] = 0;
    for(int i = 1;i < n;i++)
    {
        dp[i] = INT_MAX;
        for(int j = 0;j < i;j++)
            if(j+arr[j] >= i && dp[j] != INT_MAX)
            {
                dp[i] = min(dp[i],dp[j]+1);
                break;
            }
    }
    return dp[n-1];
}

int minJumps_Rec(int arr[],int n) //recursive solution
{
    if(n == 0)
        return 0;
    int res = INT_MAX;
    for(int i = 0;i <= n-2;i++)
    {
        if(i+arr[i] >= n-1)
        {
            int sub_res = minJumps_Rec(arr,i+1);
            if(sub_res != INT_MAX)
                res = min(res,sub_res+1);
        }
    }
    return res;
}

int main()
{
    int arr[] = {3,4,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minJumps_Rec(arr,n);
}