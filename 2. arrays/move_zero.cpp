#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void moveZero(vector<int>& nums)
    {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[count]);
                count++;
            }
        }
    }
    void print_vect(vector<int>& nums)
    {
        for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
    }
};

int main()
{
    Solution obj1;
    vector<int> nums = {8,5,0,10,0,20};
    obj1.moveZero(nums);
    obj1.print_vect(nums);
}