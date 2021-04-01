#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int removeDup(vector<int>& nums)
    {
        int res = 1;
        for(int i =1; i <nums.size();i++)
        {
            if(nums[i] != nums[res-1])
            {
                nums[res] = nums[i];
                res++;
            }
        }
        return res;
    }
    void print_vect(vector<int>& nums,int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
    }
};

int main()
{
    Solution obj1;
    vector<int> nums = {10,10,10,20,20,30,30,30,30};
    obj1.print_vect(nums,obj1.removeDup(nums));
    return 0;
}