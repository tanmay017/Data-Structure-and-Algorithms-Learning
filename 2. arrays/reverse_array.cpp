#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void reverse_arr(vector<int>& nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        while(low < high)
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
    vector<int> nums = {10,20,30,40,50,60,70,80};
    obj1.reverse_arr(nums);
    obj1.print_vect(nums);
}