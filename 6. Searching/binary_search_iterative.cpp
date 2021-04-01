#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int binarySearch(int arr[],int n,int x)
    {
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid]==x) return mid;
            else if(arr[mid]>x) high = mid-1;
            else low = mid+1;
        }
        return -1;
    }
};

int main()
{
    Solution obj1;
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/4;
    cout<<obj1.binarySearch(arr,n,70);
}