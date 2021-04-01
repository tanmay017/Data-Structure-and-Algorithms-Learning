#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void printTwoOddOccNum(vector<int>& nums)
    {
        int XOR=0;
        for(int i=0;i<nums.size();i++)
        {
            XOR = XOR^nums[i];
        }
        int rightSet = XOR&~(XOR-1);
        int res1=0;
        int res2=0;
        for(int i=0;i<nums.size();i++)
        {
            if((rightSet&nums[i])!=0)
            {
                res1 = res1^nums[i];
            }
            else
            {
                res2 = res2^nums[i];
            }
        }
        cout<<res1<<" "<<res2;
    }
};

int main()
{
    Solution obj1;
    vector<int> nums = {3,4,3,4,5,4,4,6,7,7};
    obj1.printTwoOddOccNum(nums);
}