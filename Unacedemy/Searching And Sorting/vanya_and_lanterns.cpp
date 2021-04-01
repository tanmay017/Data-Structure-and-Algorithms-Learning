#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n' // Remove if Interactive Question
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

void c_p_c()
{
    clock_t begin = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void c_p_c2()
{
    clock_t begin = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{
    int n, l;
    cin >> n >> l;
    vi a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    double maxDist = 0;
    for (int i = 1; i < n; i++)
        maxDist = max(double(a[i] - a[i - 1]), maxDist);
    cout << max({double(a[0]), double(l - a[n - 1]), maxDist / 2});
}

int32_t main()
{
    c_p_c();

    int t = 1;
    while (t--)
    {
        solve();
    }

    c_p_c2();
}