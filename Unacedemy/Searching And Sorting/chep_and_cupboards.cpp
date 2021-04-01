#include <bits/stdc++.h> // correct solution // https://www.codechef.com/problems/CHEFCUP
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
int a, b;
int f(int x)
{
    return (a - x) * (b - x) * x;
}
void solve()
{
    cin >> a >> b;
    int l = 1;
    int r = min(a, b) - 1;
    while (r - l > 3)
    {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;
        int f1 = f(m1);
        int f2 = f(m2);
        if (f1 < f2)
            l = m1;
        else
            r = m2;
    }
    cout << l << f(l);
}

int32_t main()
{
    c_p_c();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    c_p_c2();
}