#include <bits/stdc++.h> //This take O(count of bitset)
using namespace std;
class Solution
{
    public:
    int countSetBits(int n)
    {
        int res=0;
        while(n>0)
        {
            n=n&(n-1);
            res++;
        }
        return res;
    }
};
int main()
{
    Solution obj1;
    cout<<obj1.countSetBits(13);
}