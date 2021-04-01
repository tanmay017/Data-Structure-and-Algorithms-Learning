#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int findLog(int base,int num)
    {
        if(num == 1) return 0;
        else return 1+findLog(base,num/base);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solution obj1;
    int num,base;
    cin>>base>>num;
    cout<<obj1.findLog(base,num);
    return 0;
}