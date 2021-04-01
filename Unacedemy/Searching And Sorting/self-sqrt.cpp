#include <bits/stdc++.h> // Correct Solution
using namespace std;

bool check(int m, int n)
{
    return m * m <= n;
}

int self_sqrt(int n)
{
    int low = 0;
    int high = n;
    int mid = (low + high) / 2;
    int ans = -1;
    while (high >= low)
    {
        if (check(mid, n))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << self_sqrt(n);
}