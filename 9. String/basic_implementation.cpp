#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "geekforgeeks";
    cout << str.length() << "\n";
    str = str + "xyz";
    cout << str << " "
         << "\n";
    cout << str.substr(1, 3) << "\n";
    cout << str.find("tot") << "\n";
}