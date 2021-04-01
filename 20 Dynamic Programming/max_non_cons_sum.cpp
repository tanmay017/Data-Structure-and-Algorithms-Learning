#include <bits/stdc++.h> //Problem : Find Maximum Sum with Non- consecutive elements
using namespace std;

int maxSum_rec(int arr[],int n) //Recursive solution this takes O(2^N) time
{
    if(n == 0) return 0;
    else if(n == 2) return max(arr[0],arr[1]);
    return max(arr[n-1] + maxSum_rec(arr,n-2),maxSum_rec(arr,n-1));
}

int maxSum_dp(int arr[],int n) //Non Optimised DP Solution this takes O(N) time and O(N) Aux Space 
{
    int dp[n+1];
    dp[1] = arr[0];
    dp[2] = max(arr[0],arr[1]);
    for(int i = 3;i <= n;i++)
        dp[i] = max(arr[i-1] + dp[i-2],dp[i-1]);
    return dp[n];
}

int maxSum_dpO(int arr[],int n) //optimised DP SOlution takes O(N) time and O(1) Space
{
    int prev_1 = arr[0];
    if(n == 1) prev_1;
    int prev_2 = max(arr[0],arr[1]);
    int res;
    for(int i = 3;i <= n;i++)
    {
        res = max(prev_1,arr[i]+prev_2);
        prev_2 = prev_1;
        prev_1 = res;
    }
    return res;
}
int main()
{
    int arr[] = {10,5,15,20,2,30};
    int n = 6;
    cout<<"Maximum Non Consecutive Sum is : "<<maxSum_dpO(arr,n);
}