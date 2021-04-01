#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void print_nums(int num)
    {
        if(num == 0) return;
        cout<<num<<" ";
        print_nums(num-1);
    }
};

int main()
{
    Solution obj1;
    obj1.print_nums(8);
}

