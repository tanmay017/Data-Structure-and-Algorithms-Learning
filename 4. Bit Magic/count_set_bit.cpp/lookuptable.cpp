#include <bits/stdc++.h> //This take some time for preprocessing and consume extra space
using namespace std; //Perfect Example for constructor
class Solution
{
    int arr[256];
  public:
    Solution()
    {
        arr[0] = 0;
        for(int i=1;i<256;i++)
        {
            arr[i]=(i&1) + arr[i/2]; 
        }
    }
    int countSetBit(int n)
    {
        int res=arr[n&0xff];
        n=n>>8;
        res += arr[n&0xff];
        n=n>>8;
        res += arr[n&0xff];
        n=n>>8;
        res += arr[n&0xff];
        return res;
    }
};

int main()
{
    Solution obj1;
    cout<<obj1.countSetBit(13);
}