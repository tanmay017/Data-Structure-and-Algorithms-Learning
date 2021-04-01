#include <bits/stdc++.h> //based on observation that if mid is not peak than if left corrosponding element
using namespace std; //is greater than mid than there is always peak in left side and vice - versa for right
class Solution
{
    public:
    int findPeak(int arr[],int n)
    {
        int low=0;
        int high = n-1;
        while(low<=high)
        {
            int mid= (low+high)/2;
            if(mid == 0 || arr[mid]>=arr[mid-1] && mid == n-1 || arr[mid]>=arr[mid+1]) return mid;
            if(mid>0 && arr[mid]<arr[mid-1]) high = mid-1;
            else low = mid+1;
        }
        return -1;
    }
};

int main()
{
    Solution obj1;
    int arr[] = {5,20,40,30,20,50,60};
    int n= sizeof(arr)/4;
    cout<<obj1.findPeak(arr,n);
}