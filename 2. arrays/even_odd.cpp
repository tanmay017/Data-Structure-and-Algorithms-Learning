#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxLenthEvenOdd(vector<int>& arr)
    {
        int currCount=1;
        int maxCount=1;
        for(int i=1;i<arr.size();i++)
        {
            if((arr[i]%2==0 && arr[i-1]%2==1) || (arr[i]%2==1 && arr[i-1]%2==0))
            {
                currCount++;
                maxCount=max(maxCount,currCount);
            }
            else currCount=1;
        }
        return maxCount;
    }
};

int main()
{
    Solution obj1;
    vector<int> arr{10,12,14,7,8};
    cout<<obj1.maxLenthEvenOdd(arr);
}