#include <bits/stdc++.h> //Taking help of property X^0 =X and X^X=0
using namespace std;
class Solution
{
    public:
    int oddOcuring(vector<int> nums)
    {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            res = res^nums[i];
        }
        return res;
    }
};

int main()
{
    Solution obj1;
    vector<int> nums = {8,7,7,8,8};
    cout<<obj1.oddOcuring(nums);
}