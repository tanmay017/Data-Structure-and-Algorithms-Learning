#include <bits/stdc++.h> // https://codeforces.com/problemset/problem/1352/C // Correct Solution
using namespace std;

#define int long long
#define vi vector<int>
#define mii map<int, int>
#define REP(i, x, y) for (int i = x; i < y; i++)
#define F first
#define mp make_pair
#define S second
#define EB emplace_back
#define PRES(c, x) ((c).find(x) != (c).end())

void solve(int n, int k)
{
    int low = 1;
    int high = n;
    int mid = low + (high - low) / 2;
    int ans = -1;
    while (high >= low)
    {
        if (mid % n != 0 && mid - mid / n == k)
        {
            ans = mid;
            break;
        }
        else if (mid - mid / n < k)
            low = mid + 1;
        else
            high = mid - 1;
        mid = low + (high - low) / 2;
    }
    cout << mid << endl;
}
int32_t main()
{
    clock_t begin = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
}