#include <bits/stdc++.h> //This Kadane's Algorithm both algo in this and maxSumSubArr.cpp takes log(n) time
using namespace std;
class Solution
{
    public:
    int maxSum(vector<int>& arr)
    {
        int res = arr[0];
        int maxEnding = arr[0];
        for(int i=1;i<arr.size();i++)
        {
            maxEnding=max(maxEnding+arr[i],arr[i]);
            res=max(res,maxEnding); 
        }
        return res;
    }
};
int main()
{
    Solution obj1;
    vector<int> arr{1,-2,3,-1,2};
    cout<<obj1.maxSum(arr);
    return 0;
}