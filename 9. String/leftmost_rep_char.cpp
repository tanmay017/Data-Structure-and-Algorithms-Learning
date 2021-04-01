#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    const int CHAR = 256;
    int leftmostRep(string str)
    {
        int count[CHAR] = {0};
        for (int i = 0; i < str.length(); i++)
            count[str[i]]++;
        for (int i = 0; i < str.length(); i++)
        {
            if (count[str[i]] > 1)
                return i;
        }
        return -1;
    }
};
int main()
{
    Solution obj;
    string str = "abcdee";
    cout << obj.leftmostRep(str);
}