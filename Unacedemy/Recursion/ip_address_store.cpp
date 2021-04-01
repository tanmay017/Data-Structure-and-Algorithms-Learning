#include <bits/stdc++.h>
using namespace std;

void helper(string ip, int idx, string output, int count)
{
    if (count > 4)
        return;
    if (count == 4 && idx == ip.size())
    {
        cout << output << endl;
        return; //try removing this anyway it will work
    }
    for (int i = 1; i < 4; i++)
    {
        if (idx + i > ip.size())
            break;
        string nextPossibleNum = ip.substr(idx, i);
        if (nextPossibleNum[0] == '0' && nextPossibleNum.size() > 1)
            break;
        if (i == 3 && stoi(nextPossibleNum) >= 256)
            break;
        helper(ip, idx + i, output + nextPossibleNum + (count == 3 ? "" : "."), count + 1);
    }
}
void restoreIP(string ip)
{
    helper(ip, 0, "", 0);
}
int main()
{
    string str;
    cin >> str;
    restoreIP(str);
}