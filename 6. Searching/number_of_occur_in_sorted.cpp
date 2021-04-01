#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int firstOccur(int arr[],int n,int x)
    {
        int high=n-1;
        int low=0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid] > x) high = mid-1;
            else if(arr[mid] < x) low = mid+1;
            else
            {
                if(mid==0 || arr[mid-1] != arr[mid]) return mid;
                else high=mid-1;
            }   
        }
        return -1;
    }
    int lastOccur(int arr[],int n,int x)
    {
        int high=n-1;
        int low=0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid] > x) high = mid-1;
            else if(arr[mid] < x) low = mid+1;
            else
            {
                if(mid==n-1 || arr[mid+1] != arr[mid]) return mid;
                else low=mid+1;
            }   
        }
        return -1;
    }
    public:
    int countOfOccur(int arr[],int n,int x)
    {
        int first = firstOccur(arr,n,x);
        if(first == -1) return 0;
        else return (lastOccur(arr,n,x)-first+1);
    }

};
int main()
{
    Solution obj;
    int arr[] = {10,20,30,30,30,30,30,50,60,80,80,90};
    int n = sizeof(arr)/4;
    cout<<obj.countOfOccur(arr,n,30);
}