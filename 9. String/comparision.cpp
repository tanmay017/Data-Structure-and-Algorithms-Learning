#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "abc";
    string str2 = "bcd";
    if (str1 == str2)
        cout << "Equal";
    else if (str1 > str2)
        cout << "Greater";
    else
        cout << "Smaller";
}