#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isSorted(vector<int>& nums)
    {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1]) return false;
        }
        return true;
    }
};
int main()
{
    Solution obj1;
    vector<int> nums = {10,20,30,40,50,60};
    if(obj1.isSorted(nums)) cout<<"Yes, array is sorted.";
    else cout<<"No, array is not sorted.";
}