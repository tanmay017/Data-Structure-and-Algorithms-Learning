#include <bits/stdc++.h> //This program Convert Decimal Number to binary number 
using namespace std;

class Solution
{
    public:
    void convert_binary(int num)
    {
        if(num == 0) return;
        convert_binary(num/2);
        cout<<(num%2);
    }
};

int main()
{
    Solution obj1;
    int num = 91;
    obj1.convert_binary(num);
    return 0;
}