
#include <bits/stdc++.h> 
using namespace std; 

int MatrixChainOrder_rec(int p[], int i, int j) 
{ 
	if (i == j) 
		return 0; 
	int k; 
	int min = INT_MAX; 
	int count; 
	for (k = i; k < j; k++) { 
		count = MatrixChainOrder_rec(p, i, k) + MatrixChainOrder_rec(p, k + 1, j) + p[i - 1] * p[k] * p[j]; 
		if (count < min) 
			min = count; 
	} 
	return min; 
} 

int mChain_dp(int p[], int n) 
{ 
    int dp[n][n];
    for (int i=0; i<n-1; i++)
       dp[i][i+1] = 0;     
    for (int gap = 2; gap < n; gap++)
    {
        for (int i=0; i+gap < n; i++)
        {
            int j = i + gap;
            dp[i][j] = INT_MAX;
            for (int k=i+1; k<j; k++)
               dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + p[i]*p[k]*p[j]);
        }     
    }
    return dp[0][n-1];
}
int main() 
{ 
	int arr[] = {40, 20, 30, 10, 30}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Minimum number of multiplications is "
		<< mChain_dp(arr, n); 
} 

