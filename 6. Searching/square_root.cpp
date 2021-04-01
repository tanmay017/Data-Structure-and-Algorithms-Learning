#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int sqroot(int n)
    {
        int low = 1;
        int high = n;
        int ans = -1;
        if(n == 0 || n == 1) return n;
        while(low<=high)
        {
            int mid = (low + high)/2;
            if(mid*mid > n) high = mid-1;
            else if(mid*mid < n)
            {
                low= mid+1;
                ans = mid;
            }
            else return mid;
        }
        return ans;
    }
};

int main()
{
    Solution obj1;
    cout<<obj1.sqroot(8);
}