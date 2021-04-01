#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isSumPair(int arr[],int n,int x)
    {
        int left = 0;
        int right = n-1;
        while(left<right)
        { 
            int sum = arr[left]+arr[right];
            if(x > sum) left++;
            else if(x < sum) right--;
            else return true;
        }
        return false;
    }
};

int main()
{
    Solution obj;
    int arr[] = {2,4,8,9,11,12,20,30};
    int n = sizeof(arr)/4;
    if(obj.isSumPair(arr,n,23)) cout<<"yes";
    else cout<<"no";
}