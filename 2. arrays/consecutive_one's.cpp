#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxConOnes(vector<bool>& arr)
    {
        int currCount = 0;
        int maxCount = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==1)
            {
                currCount++;
                maxCount=max(maxCount,currCount);
            }
            else currCount=0;
        }
        return maxCount;
    }
};
int main()
{
    Solution obj1;
    vector<bool> arr{1,0,1,1,1,0,1,1};
    cout<<obj1.maxConOnes(arr);
}