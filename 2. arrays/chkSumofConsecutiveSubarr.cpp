#include <bits/stdc++.h> //for non-negative array,to check if any sub array is equal to given sum
using namespace std; //window sliding technique
class Solution
{
    public:
    bool check_sum(vector<int>& nums,int check_sum)
    {
        int currSum=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            currSum += nums[i];
            while(currSum>check_sum && j<i)
            {
                currSum = currSum - nums[j];
                j++;
            }
            if(currSum==check_sum) return true;
        }
        return false;
    }
};

int main()
{
    Solution obj1;
    vector<int> vect ={1,4,20,3,10,5};
    if(obj1.check_sum(vect,33)) cout<<"Yes";
}