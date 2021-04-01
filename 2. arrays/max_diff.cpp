#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxDiff(vector<int>& nums)
    {
        int ans = nums[1]-nums[0];
        int minVal = nums[0];
        for(int i=1;i<nums.size()-1;i++)
        {
            ans = max(ans,nums[i]-minVal);
            minVal = min(minVal,nums[i]);
        }
        return ans;
    }
};
int main()
{
    Solution obj1;
    vector<int> vect = {2,3,10,6,4,8,1};
    cout<<"Max Difference : "<<obj1.maxDiff(vect);
}