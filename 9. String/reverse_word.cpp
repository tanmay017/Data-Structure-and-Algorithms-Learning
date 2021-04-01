#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void revWord(string &str)
    {
        int start = 0;
        for (int end = 0; end < str.length(); end++)
        {
            if (str[end] == ' ') //Can also use of ' ' instead of 32 which is the ASCII value for space
            {
                reverse(str.begin() + start, str.begin() + end);
                start = end + 1;
            }
        }
        reverse(str.begin() + start, str.end());
        reverse(str.begin(), str.end());
    }
};
int main()
{
    Solution obj1;
    string str = "I dont know you";
    obj1.revWord(str);
    cout << str;
}