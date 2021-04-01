#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void rotate(vector<int>& nums,int d)
    {
        vector<int> temp;
        for(int i=0;i<d;i++)
        {
            temp.push_back(nums[i]);
        }
        for(int i=d;i<nums.size();i++)
        {
            nums[i-d] = nums[i];
        }
        int j = 0;
        for(int i=nums.size()-d;i<nums.size();i++)
        {
            nums[i] = temp[j];
            j++; 
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
    vector<int> nums = {2,5,3,7,9,1,0};
    obj1.rotate(nums,5);
    obj1.print_vect(nums);
}