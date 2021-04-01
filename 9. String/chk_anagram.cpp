#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    const int CHAR = 256;
    bool areAnagram(string s1, string s2)
    {
        if (s1.length() != s2.length())
            return false;
        int count[CHAR] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            count[s1[i]]++; // can also use count[s1[i] - 'a']++ to reduce size of count to 26
            count[s2[i]]--;
        }
        for (int i = 0; i < CHAR; i++)
            if (count[i] != 0)
                return false;
        return true;
    }
};
int main()
{
    Solution obj;
    string str1 = "silent";
    string str2 = "listen";
    if (obj.areAnagram(str1, str2))
        cout << "Yes";
    else
        cout << "No";
}