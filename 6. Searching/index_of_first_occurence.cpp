#include <bits/stdc++.h> //for sorted array
using namespace std; //adapted from binary search algo
class Solution
{
    public:
    int firstOccurence(int arr[],int n,int x)
    {
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid] > x) high=mid-1;
            else if(arr[mid] < x) low=mid+1;
            else 
            {
                if(mid==0 || arr[mid-1] != arr[mid]) return mid;
                else high=mid-1;
            }
        }
        return -1;
    }
};

int main()
{
    Solution obj1;
    int arr[] = {10,10,10,50,60,70,70,80,80,80,90};
    int n = sizeof(arr)/4;
    cout<<obj1.firstOccurence(arr,n,80);
}
