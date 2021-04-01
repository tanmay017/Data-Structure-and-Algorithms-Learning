/* You are given n cells your aim is to reach nth cell starting from cell one you can jump any of 1,2,3,4,5,6 times print the
   ways of reaching the destination */

#include <bits/stdc++.h>
using namespace std;

void printPossibleJumps(int n, int i, string osf = "")
{
    if (i >= n)
        return;
    if (i == n - 1)
    {
        cout << osf << endl;
        return;
    }
    for (int j = 1; j <= 6; j++)
        printPossibleJumps(n, i + j, osf + to_string(j) + "->");
}
int main()
{
    int n;
    cin >> n;
    printPossibleJumps(n, 0);
}