#include <bits/stdc++.h> //We need to find number permutations of BST possible
using namespace std; //Caternal Number gives efficient solution O(N) time and O(1) Aux Space

int countBST(int n)
{
    int dp[n+1];
    dp[0] = 1;
    for(int i = 1;i <= n;i++)
    {
        dp[i] = 0;
        for(int j = 0;j < i;j++)
            dp[i] += dp[j] * dp[i-j-1];
    }
    return dp[n];
}
int main()
{
    int n = 4;
    cout<<"Number of Permutations of BSTs are : "<<countBST(n);
}