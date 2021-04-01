#include <bits/stdc++.h> // https://codeforces.com/problemset/problem/978/C // Correct Solution
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
void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n);
    vi b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    if (n == 1)
    {
        for (auto x : b)
            cout << 1 << " " << x << endl;
        return;
    }
    vi pre(n);
    pre[0] = 0;
    pre[1] = a[0];
    for (int i = 2; i < n; i++)
        pre[i] = a[i - 1] + a[i - 2];
    for (int i = 0; i < (int)b.size(); i++)
    {
        auto it = upper_bound(pre.begin(), pre.end(), b[i]);
        it--;
        int dom = it - pre.begin();
        cout << dom + 1 << " " << b[i] - *it << endl;
    }
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