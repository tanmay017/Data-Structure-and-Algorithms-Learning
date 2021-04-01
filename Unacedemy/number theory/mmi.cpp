#include <bits/stdc++.h>
using namespace std;

int mmi(int a, int m)
{
    int b = m - 2;
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b = b / 2;
    }
    return res;
}
int main()
{
    int a, m;
    cin >> a >> m;
    cout << mmi(a, m);
}