#include <bits/stdc++.h>// Window Sliding Technique
using namespace std;
class Solution
{
    public:
    int maxSum(vector<int>& nums,int k)
    {
        int currSum = 0;
        for(int i=0;i<k;i++)
        {
            currSum += nums[i];
        }
        int maxSum = currSum;
        for(int i=k;i<nums.size();i++)
        {
            currSum = currSum + nums[i] - nums[i-k];
            maxSum = max(maxSum,currSum);
        }
        return maxSum;
    }
};

int main()
{
    Solution obj1;
    vector<int> nums = {1,8,30,-5,20,7};
    cout<<obj1.maxSum(nums,3);
}