#include <bits/stdc++.h>
using namespace std;
class SOlution
{
    public:
    void printFlips(vector<bool>& nums)
    {
        bool setValue = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                if(nums[i]!=nums[0]) cout<<"From "<<i<<" to ";
                else cout<<i-1<<"\n";
            }
        }
        if(nums[nums.size()-1]!=nums[0]) cout<<nums.size()-1;
    }
};

int main()
{
    SOlution obj1;
    vector<bool> vect= {1,1,0,0,0,1,1,1,0,0,1};
    obj1.printFlips(vect);
}