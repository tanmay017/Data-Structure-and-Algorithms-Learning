#include <bits/stdc++.h> //check kth bit is set or not
using namespace std; //could be solved with right shift operator as well
class Solution
{
    public:
    void check_kth(int n,int k)
    {
        if(n&(1<<(k-1))!=0) cout<<"yes";
        else cout<<"no";
    }
};

int main()
{
    Solution obj1;
    obj1.check_kth(5,3);
}