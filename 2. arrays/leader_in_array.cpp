#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> leader_in_array(vector<int>& nums)
    {
        vector<int> res;
        int temp = nums[nums.size()-1];
        res.push_back(temp);
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]>temp)
            {
                res.push_back(nums[i]);
                temp = nums[i];
            }    
        }
        reverse(res);
        return res;
    }
    void print_vect(vector<int>& nums)
    {
        for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
    }
    void reverse(vector<int>& nums)
    {
        int low = 0,high = nums.size()-1;
        while(low<high)
        {
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }
};

int main()
{
    Solution obj1;
    vector<int> vect = {30,20,10};
    vector<int> res = obj1.leader_in_array(vect);
    obj1.print_vect(res);
}
