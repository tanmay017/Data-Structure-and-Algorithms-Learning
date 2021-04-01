#include <bits/stdc++.h> //This program is used to check if given two strings are rotation of each other or not
using namespace std;
class Solution
{
public:
    bool isRotation(string &s1, string &s2)
    {
        if (s1.length() != s2.length())
            false;
        return ((s1 + s1).find(s2) != string::npos); //find returns string::npos when it cannot find string
    }
};
int main()
{
    Solution obj;
    string str1 = "abcde";
    string str2 = "cdeab";
    if (obj.isRotation(str1, str2))
        cout << "Yes";
    else
        cout << "NO";
}