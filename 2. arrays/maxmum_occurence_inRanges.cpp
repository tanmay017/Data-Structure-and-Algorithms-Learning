#include <bits/stdc++.h> //Find Out the element which have occured maximum time in all intervals
using namespace std;
class Solution
{
    public:
    int maxOccurence(int L[],int R[],int n)
    {
        int arr[1000];
        memset(arr, 0, sizeof(arr));
        for(int i=0;i<n;i++)
        {
            arr[L[i]]++;
            arr[R[i+1]]--;
        }
        int max = arr[0];
        int res=0;
        for(int i=1;i<1000;i++)
        {
            arr[i] += arr[i-1];
            if(max<arr[i])
            {
                max=arr[i];
                res=i;
            }
        }
        return res;
    }
};

int main()
{
    Solution obj1;
    int L[] = {1,2,3};
    int R[] = {3,5,7};
    int n = sizeof(L)/4;
    cout<<obj1.maxOccurence(L,R,n);
}