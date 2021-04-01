#include <bits/stdc++.h> // https://www.codechef.com/problems/AMCS03 // Correct Solution
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
int n, k;
vi s;
vi d;
double f(double mid)
{
    double mini = 1e11;
    double maxi = 0;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, s[i] * mid + d[i]);
        maxi = max(maxi, s[i] * mid + d[i]);
    }
    return maxi - mini;
}
void solve()
{
    cin >> n >> k;
    s.resize(n), d.resize(n);
    for (int i = 0; i < n; i++)
        cin >> s[i] >> d[i];
    double low = 0.0;
    double high = k; // This is very important
    for (int _ = 0; _ < 100; _++)
    {
        double mid1 = low + (high - low) / 3.0;
        double mid2 = high - (high - low) / 3.0;
        if (f(mid1) >= f(mid2))
            low = mid1;
        else
            high = mid2;
    }
    cout << fixed << setprecision(6) << f(low) << endl;
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