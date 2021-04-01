#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxSum(vector<int>& arr)
    {
        int res = arr[0];
        int maxEnding = arr[0];
        int sum=arr[0];
        int res1= arr[0];
        int minEnding = arr[0];
        for(int i=1;i<arr.size();i++)
        {
            maxEnding = max(maxEnding+arr[i],arr[i]);
            res = max(maxEnding,res);
        }
        for(int i=1;i<arr.size();i++) sum += arr[i];
        for(int i=1;i<arr.size();i++)
        {
            minEnding = min(minEnding+arr[i],arr[i]);
            res1 = min(minEnding,res1);
        }
        res1 = sum-res1;
        return max(res,res1);
    }
};

int main()
{
    Solution obj1;
    vector<int> arr={3,-4,5,6,-8};
    cout<<"Maximum Sum Circular Subarray : "<<obj1.maxSum(arr);
}