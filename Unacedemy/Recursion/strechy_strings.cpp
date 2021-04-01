#include <bits/stdc++.h>
using namespace std;

int getConsecutiveLen(string &s, int start)
{
    int end = start;
    while (end < s.size() && s[start] == s[end])
        end++;
    return end - start;
}
bool isStrechy(string original, string strechy)
{
    int i = 0, j = 0;
    while (i < original.size() && j < strechy.size())
    {
        if (original[i] != strechy[j])
            return false;
        int consecutive_orig = getConsecutiveLen(original, i);
        int consecutive_strechy = getConsecutiveLen(strechy, j);
        if ((consecutive_orig > consecutive_strechy || consecutive_strechy < 3) && consecutive_orig != consecutive_strechy)
            return false;
        i += consecutive_orig;
        j += consecutive_strechy;
    }
    return (i == original.size() && j == strechy.size());
}
int countStrechy(string str, vector<string> &li)
{
    int count = 0;
    for (string &s : li)
    {
        if (isStrechy(str, s))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str;
    cin >> str;
    int n;
    cin >> n;
    vector<string> li(n);
    for (int i = 0; i < n; i++)
        cin >> li[i];
    cout << countStrechy(str, li);
}