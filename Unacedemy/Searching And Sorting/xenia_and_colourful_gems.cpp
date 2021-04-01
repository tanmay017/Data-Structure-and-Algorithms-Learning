#include <bits/stdc++.h>
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
int ans;
int sq(int a)
{
    return a * a;
}
void solve(vi &a, vi &b, vi &c)
{
    for (auto x : a)
    {
        auto y = lower_bound(b.begin(), b.end(), x);
        auto z = upper_bound(c.begin(), c.end(), x);
        if (y == b.end() || z == c.begin())
        {
            continue;
        }
        z--;
        ans = min(ans, sq(x - *y) + sq(*y - *z) + sq(*z - x));
    }
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
        int nr, ng, nb;
        cin >> nr >> ng >> nb;
        vi r(nr);
        vi g(ng);
        vi b(nb);
        for (auto &i : r)
            cin >> i;
        for (auto &j : g)
            cin >> j;
        for (auto &k : b)
            cin >> k;
        sort(r.begin(), r.end());
        sort(g.begin(), g.end());
        sort(b.begin(), b.end());
        ans = LONG_LONG_MAX;
        solve(r, g, b);
        solve(r, b, g);
        solve(g, b, r);
        solve(g, r, b);
        solve(b, r, g);
        solve(b, g, r);
        cout << ans << endl;
    }
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
}