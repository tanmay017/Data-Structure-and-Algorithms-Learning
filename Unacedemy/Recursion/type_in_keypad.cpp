/* Remeber old days of Nokia mobile we use to type letter with the help of Keypad You are given number and you have to generate
   all posibble permutations with it */
#include <bits/stdc++.h>
using namespace std;

void printString(map<char, string> &keypad, string str, int i, int len, string osf = "")
{
    if (i == len)
    {
        cout << osf << endl;
        return;
    }
    string temp = keypad[str[i]];
    for (int j = 0; j < temp.size(); j++)
        printString(keypad, str, i + 1, len, osf + temp[j]);
}

int main()
{
    string str;
    cin >> str;
    map<char, string> keyPad;
    keyPad['2'] = "abc";
    keyPad['3'] = "def";
    keyPad['4'] = "jhi";
    keyPad['5'] = "jkl";
    keyPad['6'] = "mno";
    keyPad['7'] = "pqrs";
    keyPad['8'] = "tuv";
    keyPad['9'] = "wxyz";
    printString(keyPad, str, 0, str.length());
}