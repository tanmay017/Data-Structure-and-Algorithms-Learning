#include <bits/stdc++.h>
using namespace std;

int numberOfWays(int n)
{
    if (n == 1 || n == 2)
        return n;
    return numberOfWays(n - 1) + (n - 1) * numberOfWays(n - 2);
}
int main()
{
    int N;
    cin >> N;
    cout << numberOfWays(N);
}