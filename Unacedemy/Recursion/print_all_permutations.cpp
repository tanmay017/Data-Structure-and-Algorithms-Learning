#include <bits/stdc++.h>
using namespace std;

void printPermu(string str, string perm = "")
{
    if (str == "")
    {
        cout << perm << endl;
        return;
    }
    unordered_set<char> s; // to ensure if string characters are not unique than not to print same subsets
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (s.count(ch) == 0)
        {                                                      // to ensure if string characters are not unique than not to print same subsets
            string ros = str.substr(0, i) + str.substr(i + 1); // ros stands for rest of string
            s.insert(ch);
            printPermu(ros, perm + ch);
        }
    }
}

int main()
{
    string str;
    cin >> str;
    printPermu(str);
}