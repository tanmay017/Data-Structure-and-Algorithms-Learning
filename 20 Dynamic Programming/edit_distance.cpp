#include <bits/stdc++.h> //edits allowed : insert,delete,replace
using namespace std;

int mini (int a,int b,int c)
{
    return min(a,min(b,c));
}
int eD(string &s1,string &s2,int m,int n)
{
    int dp[m+1][n+1];
    for(int i = 0;i <= m;i++)
        dp[i][0] = i;
    for(int i = 0;i <= n;i++)
        dp[0][i] = i;
    for(int i = 1;i <= m;i++)
        for(int j = 1;j <= n;j++)
        {
            if(s1[i] == s2[j])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = mini(dp[i][j-1],dp[j-1][i],dp[i-1][j-1]);
        }
    return dp[m][n];
}
int eD_Rec(string &s1,string &s2,int m,int n) //Recursive function
{
    if(m == 0) return n;
    if(n == 0) return m;
    if(s1[m-1] == s2[n-1])
        return eD_Rec(s1,s2,m-1,n-1);
    return 1 + mini (eD_Rec(s1,s2,m,n-1), //insert
                    eD_Rec(s1,s2,m-1,n), //delete
                    eD_Rec(s1,s2,m-1,n-1)); //replace
}

int main()
{
    string s1 = "sunday";
    string s2 = "saturday";
    cout<<"Minimum Number of edits : "<<eD_Rec(s1,s2,s1.length(),s2.length());
}