#include <bits/stdc++.h> //Solved with both Binary Search and DP.Out of which Bindary Search is optimal
using namespace std;

int ceil_idx(int arr[],int l,int r,int x)
{
    while(r > l)
    {
        int m = l+(r-l)/2;
        if(arr[m] > x)
            r = m;
        else 
            l = m+1;
    }
    return r;
}
int LIS_bs(int arr[],int n) // Optimal Approach Takes O(NlogN) time
{
    int tail[n];
    tail[1] = arr[1];
    int len = 1;
    for(int i = 1;i < n;i++)
    {
        if(arr[i] > tail[len-1])
        {
            tail[len] = arr[i];
            len++;
        }
        else 
        {
            int c = ceil_idx(tail,0,len-1,arr[i]); //ceiling is the hack of this algo
            tail[c] = arr[i];
        }
    }
    return len;
}
int LIS_dp(int arr[],int n) //Not best it takes O(N^2) time and O(N) Aux Space
{
    int lis[n];
    lis[0] = 1;
    for(int i = 1;i < n;i++) 
    {
        lis[i] = 1;
        for(int j = 0;j < i;j++)
        {
            if(arr[j] < arr[i])
                lis[i] = max(lis[i],lis[j]+1);
        }
    }
    int res = lis[0];
    for(int i = 0;i < n;i++)
        res = max(res,lis[i]);
    return res;
}
int main()
{
    int arr[] = {3,4,2,8,10,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<LIS_bs(arr,n);
}