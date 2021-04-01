#include <bits/stdc++.h> //remeber that if in problem we are given unsorted array sort it first than continue same as below
using namespace std;
class Solution
{
    public:
    void freq(vector<int>& nums)
    {
        int i=1,freq=1;
        while(i<nums.size())
        {
            while(i<nums.size() && nums[i] == nums[i-1])
            {
                freq++;
                i++;
            }
            cout<<nums[i-1]<<" "<<freq<<"\n";
            i++;
            freq=1;
        }
    }
};
int main()
{
    Solution obj1;
    vector<int> nums = {10,10,20,30,30,30};
    obj1.freq(nums);
}