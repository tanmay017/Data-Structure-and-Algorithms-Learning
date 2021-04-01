/*  Lession 2 : Recursion : Placement 2021 - Cracking Coding Interviews
    There are some special number called as mirror number. Mirror number are thoes which looks exactly same when roated 180.

    Given an integer value n,find all mirror number of length n */

#include <bits/stdc++.h> //important
using namespace std;

vector<string> printMirror(int n, int m)
{
    if (n == 0)
        return {""};
    if (n == 1)
        return {"0", "1", "8"};
    vector<string> temp = printMirror(n - 2, m);
    vector<string> res;
    for (string s : temp)
    {
        if (n != m)
            res.emplace_back('0' + s + '0');
        res.emplace_back('1' + s + '1');
        res.emplace_back('6' + s + '9');
        res.emplace_back('8' + s + '8');
        res.emplace_back('9' + s + '6');
    }
    return res;
}
void printVect(vector<string> vect)
{
    for (string str : vect)
        cout << str << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<string> allMirrors = printMirror(n, n);
    printVect(allMirrors);
}