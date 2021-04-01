#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void print_sub(string str, string curr ="" ,int index = 0)
    {
        if(index == str.length()) 
        {
            cout<<'"'<<curr<<'"'<<", ";
            return;
        }
        print_sub(str,curr,index+1);
        print_sub(str,curr+str[index],index+1);
    }
};

int main()
{
    Solution obj1;
    string str = "abc";
    obj1.print_sub(str);
    return 0;
}