#include <bits/stdc++.h>
using namespace std;

void printLexoOrder(int n, int i = 0)
{
    if (i > n)
        return;
    cout << i << endl;
    for (int j = (i == 0) ? 1 : 0; j <= 9; j++)
        printLexoOrder(n, 10 * i + j);
}
int main()
{
    int n;
    cin >> n;
    printLexoOrder(n);
}