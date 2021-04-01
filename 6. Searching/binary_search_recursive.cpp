#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int binarySearch(int arr[],int n,int x,int low,int high)
    {
        int mid = (low+high)/2;
        if(low>high) return -1;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) return binarySearch(arr,n,x,low,mid-1);
        else return binarySearch(arr,n,x,mid+1,high);
    }
};

int main()
{
    Solution obj1;
    int arr[] = {11,22,33,44,55,66,77};
    int n = sizeof(arr)/4;
    cout<<obj1.binarySearch(arr,n,77,0,n-1);
}