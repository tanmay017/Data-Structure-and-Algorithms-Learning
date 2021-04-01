#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int sec_lar(vector<int>& nums)
    {
        int max1,max2;
        if(nums[0] >= nums[1])
        {
            max1 = nums[0];
            max2 = nums[1];
        }
        else
        {
            max1 = nums[1];
            max2 = nums[0];
        }
        
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i] > max1)
            {
                max2 = max1;
                max1 = nums[i];
            }
            if(nums[i] > max2 && nums[i] < max1) max2 = nums[i];
        }
        return max2;
    }
};

int main()
{
    Solution obj1;
    vector<int> nums = {20,10,30,60,40,100};
    cout<<"The Second largest number is : "<<obj1.sec_lar(nums);
}