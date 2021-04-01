#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void print(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Solution obj1;
    int arr[] = {1,6,2,3,7,8,4,5,4,10};
    int n = sizeof(arr)/4;
    sort(arr,arr+n);
    obj1.print(arr,n);
    sort(arr,arr+n,greater<int>());
    obj1.print(arr,n);
}