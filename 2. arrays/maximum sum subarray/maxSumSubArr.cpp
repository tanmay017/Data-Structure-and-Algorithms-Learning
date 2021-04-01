#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxSum(vector<int>& arr)
    {
        int currSum=0,maxSum=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] >= 0)
            {
                currSum += arr[i];
                maxSum = max(currSum,maxSum);
            }
            if(arr[i]<0 && abs(arr[i])<currSum)
            {
                currSum += arr[i];
                maxSum = max(currSum,maxSum);
            }
            if(arr[i]<0 && abs(arr[i])>currSum)
            {
                currSum = 0;
                maxSum = max(maxSum,arr[i]);
            }
        }
        return maxSum;
    }
};

int main()
{
    Solution obj1;
    vector<int> arr{1,-2,3,-1,2};
    cout<<obj1.maxSum(arr);
    return 0;
}