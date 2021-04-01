#include <bits/stdc++.h> // https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/C // Correct Solution
using namespace std;

#define int long long
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pi>
#define mii map<int, int>
#define REP(i, x, y) for (int i = x; i < y; i++)
#define F first
#define mp make_pair
#define S second
#define EB emplace_back
#define PRES(c, x) ((c).find(x) != (c).end())

vi a;
int k;
bool check(int m)
{
    int count = 1;
    int curr = a[0];
    for (int i = 1; i < (int)a.size(); i++)
    {
        if (a[i] - curr >= m)
        {
            count++;
            curr = a[i];
        }
    }
    return count >= k;
}
void solve()
{
    int n;
    cin >> n >> k;
    a.resize(n);
    for (auto &i : a)
        cin >> i;
    int low = -1;
    int high = a[n - 1] - a[0];
    int mid = low + (high - low) / 2;
    int ans = LONG_LONG_MAX;
    while (high >= low)
    {
        if (check(mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
        mid = low + (high - low) / 2;
    }
    cout << ans;
}
int32_t main()
{
    clock_t begin = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
}