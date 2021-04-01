#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isSumPair(int arr[],int left,int right, int x)
    {
        while(left<right)
        { 
            int sum = arr[left]+arr[right];
            if(x > sum) left++;
            else if(x < sum) right--;
            else return true;
        }
        return false;
    }
    bool istriplet(int arr[],int n,int x)
    {
        for(int i=0;i<n;i++)
        {
            if(isSumPair(arr,i+1,n-1,x-arr[i])) return true;
        }
        return false;
    }
};

int main()
{
    Solution obj;
    int arr[] = {2,3,4,8,9,20,40};
    int n = sizeof(arr)/4;
    if(obj.istriplet(arr,n,32)) cout<<"yes";
    else cout<<"no";
}