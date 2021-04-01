#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void print_num(int num)
    {
        if(num==0) return;
        print_num(num-1);
        cout<<num<<" ";
    }
};

int main()
{
    Solution obj1;
    obj1.print_num(5);
}