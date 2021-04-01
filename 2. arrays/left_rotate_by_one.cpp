#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void rotate(vector<int>& nums)
    {
        int temp = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            nums[i-1] = nums[i];
        }
        nums[nums.size()-1] = temp;
    }
    void print_vect(vector<int>& nums)
    {
        for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
    }
};

int main()
{
    Solution obj1;
    vector<int> nums = {2,5,3,7,9,1,0};
    obj1.rotate(nums);
    obj1.print_vect(nums);
}