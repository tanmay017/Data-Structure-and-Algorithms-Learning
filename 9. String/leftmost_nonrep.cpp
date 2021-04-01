#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    const int CHAR = 256;
    int leftMostNoRep(string str)
    {
        int f1[CHAR];
        fill(f1, f1 + CHAR, -1);
        for (int i = 0; i < str.length(); i++)
        {
            if (f1[str[i]] == -1)
                f1[str[i]] = i;
            else
                f1[str[i]] = -2; //To unflag if do it -1 than next occurence may fall in earlier if
        }
        int res = INT_MAX;
        for (int i = 0; i < 256; i++)
        {
            if (f1[i] > -1)
                res = min(res, f1[i]);
        }
        return (res != INT_MAX) ? res : -1;
    }
};
int main()
{
    Solution obj;
    string str = "freeekfk";
    cout << obj.leftMostNoRep(str);
}