#include <bits/stdc++.h>
using namespace std;

long long pow(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    long long temp = pow(a, b / 2);
    if (b % 2 == 0)
        return temp * temp;
    else
        return a * temp * temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << pow(a, b);
}