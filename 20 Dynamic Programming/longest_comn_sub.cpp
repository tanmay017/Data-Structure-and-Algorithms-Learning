#include <bits/stdc++.h> //Shown Both Dynamic and Plain recursion
using namespace std;

int memo[1000][1000];
int lcs_memo(string &s1,string &s2,int m,int n) // Just Takes O(m*n) time memoization preferable and easy
{
    if(memo[m][n] != -1)
        return memo[m][n];
    if(m==0 || n==0)
        memo[m][n] = 0;
    else
    {
        if(s1[m-1] == s2[n-1])
            memo[m][n] = 1 + lcs_memo(s1,s2,m-1,n-1);
        else 
            memo[m][n] = max(lcs_memo(s1,s2,m-1,n),lcs_memo(s1,s2,m,n-1));
    }
    return memo[m][n];
}

int lcs_tab(string &s1,string &s2) //Just Take O(n*m) time Tabulation 
{
    int m = s1.length();
    int n = s2.length();
    int dp[m+1][n+1];
    for(int i = 0;i <=m;i++)
        dp[i][0] = 0;
    for(int i = 0;i <= n;i++)
        dp[0][i] = 0;
    for(int i = 1;i <= m;i++)
        for(int j = 1;j <= n;j++)
        {
            if(s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else 
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    return dp[m][n];
}
int lcs_rec(string &s1,string &s2,int m,int n) //works but takes exponential time
{
    if(m == 0 || n==0)
        return 0;
    if(s1[m-1] == s2[n-1])
        return 1 + lcs_rec(s1,s2,m-1,n-1);
    else 
        return max(lcs_rec(s1,s2,m,n-1),lcs_rec(s1,s2,m-1,n));
}

int main()
{
    string s1 = "AMBANI";
    string s2 = "GAMBLING";
    int m = s1.length();
    int n = s2.length();
    memset(memo,-1,sizeof(memo));
    cout<<"The Length of Longest Common Subsequence is : "<<lcs_memo(s1,s2,m,n);
}