#include <bits/stdc++.h> //Important Problem must refer self paced DSA Video
using namespace std; //It has unique DP solution 

int sol_dp(int arr[],int n) //DP Solution O(N^2)
{
    int dp[n][n];
    for(int i = 0;i < n-1;i++)
        dp[i][i+1] = max(arr[i],arr[i+1]);
    for(int gap = 3;gap < n;gap = gap+2)
        for(int i = 0;i+gap < n;i++)
        {
            int j = i+gap;
            dp[i][j] = max(arr[i] + min(dp[i+1][j-1],dp[i+2][j]),
                           arr[j] + min(dp[i][j-2],dp[i+1][j-1]));
        }
    return dp[0][n-1];
}

int sol_rec(int arr[],int i,int j) //Recursive Solution 
{
    if(i+1 == j)
        return max(arr[i],arr[j]);
    return max (arr[i] + min(sol_rec(arr,i+1,j-1),sol_rec(arr,i+2,j)),
                arr[j] + min(sol_rec(arr,i+1,j-1),sol_rec(arr,i,j-2)));
}

int main()
{
    int arr[] = {7,12,8,10,40,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"By following Optimal Strategy We can Score : "<<sol_dp(arr,n);
}