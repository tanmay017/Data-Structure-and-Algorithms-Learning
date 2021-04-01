#include <bits/stdc++.h>
using namespace std;

void printInc(int n, int i)
{
    if (n == 0)
        return;
    if (i < n)
    {
        cout << '*' << " ";
        printInc(n, i + 1);
    }
    else
    {
        cout << endl;
        printInc(n - 1, 0);
    }
}

void printDec(int n, int count = 1, int i = 0)
{
    if (count > n)
        return;
    if (i < count)
    {
        cout << '*' << " ";
        printDec(n, count, i + 1);
    }
    else
    {
        cout << endl;
        printDec(n, count + 1, 0);
    }
}

int main()
{
    int n;
    cin >> n;
    printDec(n);
}