#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void printFreq(string str)
    {
        int count[26] = {0};
        for (int i = 0; i < str.length(); i++)
            count[str[i] - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 0)
                cout << (char)(i + 'a') << " " << count[i] << endl;
        }
    }
};
int main()
{
    Solution obj;
    string str = "geekforgeeks";
    obj.printFreq(str);
}