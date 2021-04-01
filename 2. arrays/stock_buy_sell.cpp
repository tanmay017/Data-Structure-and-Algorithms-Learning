#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxProfit(vector<int>& nums)
    {
        int profit = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                profit += nums[i]-nums[i-1]; 
            }
        }
        return profit;
    }
};
int main()
{
    Solution obj1;
    vector<int> vect = {1,5,3,8,12};
    cout<<"Profit is : "<<obj1.maxProfit(vect);
}