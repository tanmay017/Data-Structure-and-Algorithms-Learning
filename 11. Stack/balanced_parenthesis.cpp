#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isMatching(char a, char b)
    {
        return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
    }
    bool isBalance(string &str)
    {
        stack<char> s;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            {
                s.push(str[i]);
            }
            else
            {
                if (s.empty())
                    return true;
                else if (isMatching(s.top(), str[i]) == false)
                    return false;
                else
                    s.pop();
            }
        }
        return (s.empty() == true);
    }
};
int main()
{
    Solution obj;
    string str = "({)}";
    if (obj.isBalance(str))
        cout << "Yes";
    else
        cout << "No";
}