#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void fillUps(string str, int lps[])
    {
        int n = str.length();
        int len = 0;
        int i = 1;
        lps[0] = 0;
        while (i < n)
        {
            if (str[i] == str[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if (len == 0)
                {
                    lps[i] = 0;
                    i++;
                }
                else
                    len = lps[len - 1];
            }
        }
    }
    void printArr(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
};
int main()
{
    Solution obj;
    string str = "AAABAAAAC";
    int lps[str.length()];
    obj.fillUps(str, lps);
    obj.printArr(lps, str.length());
}