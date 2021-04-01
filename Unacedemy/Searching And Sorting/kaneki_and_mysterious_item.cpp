#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long
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
int n, h, w;
bool check(int x)
{
    return (x / h) * (x / w) >= n;
}
void solve()
{
    cin >> n >> h >> w;
    int low = 1;
    int high = n * max(h, w);
    int ans = 0;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (check(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << ans << endl;
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