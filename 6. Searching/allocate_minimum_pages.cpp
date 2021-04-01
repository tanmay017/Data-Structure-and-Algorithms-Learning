#include <bits/stdc++.h> //wrong code need debugging
using namespace std;
class Solution
{
    bool isFeasible(int arr[],int n,int k, int ans)
    {
        int sum = 0;
        int count = 1;
        for(int i=0;i<n;i++)
        {
            if(sum+arr[i]>ans)
            {
                count++;
                sum=arr[i];
            }
            else sum+=arr[i];
        }
        return (count<=k);
    }
    public:
    int minPage(int arr[],int n,int k)
    {
        int mx = 0;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            mx = max(mx,arr[i]);
        }
        int low = mx;
        int high = sum/k;
        int res = 0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(isFeasible(arr,n,k,mid))
            {
                res = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return res;
    }
};
int main()
{
    Solution obj1;
    int arr[] = {10,20,10,30};
    int n = sizeof(arr)/4;
    cout<<obj1.minPage(arr,n,2);
}