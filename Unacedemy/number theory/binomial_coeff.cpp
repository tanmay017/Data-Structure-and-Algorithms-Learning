#include <bits/stdc++.h>
using namespace std;

int binomialCoeff(int n, int k)
{
    double res = 1;
    for (int i = 1; i <= k; i++)
        res = res * (n - k + i) / i;
    return (int)(res + 0.01); // +0.01 is added to take care of accumulated errors
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << binomialCoeff(n, k);
}