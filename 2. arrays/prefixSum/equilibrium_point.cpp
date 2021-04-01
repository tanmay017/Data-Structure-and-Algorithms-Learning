#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isEquiPoint(vector<int>& arr)
    {
        int sum =0;
        for(int i=0;i<arr.size();i++) sum += arr[i];
        int l_sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(l_sum == sum-arr[i]) return true;
            l_sum += arr[i];
            sum -= arr[i];
        }
        return false;
    }
};

int main()
{
    Solution obj1;
    vector<int> arr = {3,4,8,-9,20,6};
    if(obj1.isEquiPoint(arr)) cout<<"Yes";
    else cout<<"No";
}