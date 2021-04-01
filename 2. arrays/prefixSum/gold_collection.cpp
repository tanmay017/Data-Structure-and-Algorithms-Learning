#include <bits/stdc++.h> // https://www.codechef.com/problems/GOLDTRIP // Correct Solution
using namespace std;

#define int long long
#define endl '\n' // Remove if Interactive Question
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pi>
#define mii map<int, int>
#define REP(i, x, y) for (int i = x; i < y; i++)
#define F first
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
    int n;
    cin >> n;
    vi a(n);
    for (auto &i : a)
        cin >> i;
    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];
    int q;
    cin >> q;
    int q1, q2;
    while (q--)
    {
        cin >> q1 >> q2;
        cout << a[q2 - 1] - (q1 == 1 ? 0 : a[q1 - 2]) << endl;
    }
}

int32_t main()
{
    c_p_c();

    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    c_p_c2();
}