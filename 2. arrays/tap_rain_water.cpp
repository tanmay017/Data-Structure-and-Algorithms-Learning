#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int tappedWater(int arr[],int n)
    {
        int lmax[n],rmax[n];
        lmax[0] = arr[0];
        rmax[n-1] = arr[n-1];
        int res = 0;
        for(int i=1;i<n;i++)  lmax[i] = max(lmax[i-1],arr[i]);
        for(int i=n-2;i>=0;i--) rmax[i] = max(rmax[i+1],arr[i]);
        for(int i = 1;i<n-1;i++) res = res +(min(lmax[i],rmax[i]) - arr[i]);
        return res;
    }
};

int main()
{
    Solution obj1;
    int nums[] = {5,0,6,2,3};
    int n = sizeof(nums)/4;
    cout<<"Water Collected : "<<obj1.tappedWater(nums,n);
}