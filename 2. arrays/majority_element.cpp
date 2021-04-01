#include <bits/stdc++.h> //Moore's Algorithm O(n)
using namespace std; //refer self paced DSA course GFG for UnderStanding 
class Solution
{
    public:
    int majEle(vector<int>& nums)
    {
        int count= 1;
        int res=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[res]==nums[i]) count++;
            else count--;
            if(count==0)
            {
                res=i;
                count=1;
            }
        }
        count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[res]) count++;
        }
        if(count>nums.size()/2) return res;
        else return -1;
    }
};

int main()
{
    Solution obj1;
    vector<int> nums = {8,8,6,6,6,4,6};
    cout<<"Majority Element Occcurs in Index : "<<obj1.majEle(nums);
}
