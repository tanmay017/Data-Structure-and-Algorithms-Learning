#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void rotate(vector<int>& nums,int d)
    {
        reverse(nums,0,d-1);
        reverse(nums,d,nums.size()-1);
        reverse(nums,0,nums.size()-1);
    }
    void reverse(vector<int>& nums,int low,int high)
    {
        while(low<high)
        {
            swap(nums[low],nums[high]);
            low++;
            high--;
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
    obj1.rotate(nums,2);
    obj1.print_vect(nums);
}