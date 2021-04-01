#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
class Solution
{
public:
    bool areSame(int cp[], int ct[])
    {
        for (int i = 0; i < CHAR; i++)
            if (ct[i] != cp[i])
                return false;
        return true;
    }
    bool isPresent(string &txt, string &pat)
    {
        int ct[CHAR] = {0};
        int cp[CHAR] = {0};
        for (int i = 0; i < pat.length(); i++)
        {
            ct[txt[i]]++;
            cp[pat[i]]++;
        }
        for (int j = pat.length(); j < txt.length(); j++)
        {
            if (areSame(ct, cp))
                return true;
            ct[txt[j]]++;
            ct[txt[j - pat.length()]]--;
        }
        return false;
    }
};
int main()
{
    Solution obj;
    string txt = "geeksforgeeks";
    string pat = "frog";
    if (obj.isPresent(txt, pat))
        cout << "Yes";
    else
        cout << "No";
}