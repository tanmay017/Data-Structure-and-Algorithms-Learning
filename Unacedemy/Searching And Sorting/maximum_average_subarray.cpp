#include <bits/stdc++.h> // Correct Approach Implementation is wrong
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
int n, d;
vi a;
bool check(int x)
{
    vi pre(n + 1, 0), mini(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pre[i] = a[i - 1] - x;
    for (int i = 1; i <= n; i++)
    {
        pre[i] += pre[i - 1];
        mini[i] = min(pre[i], mini[i - 1]);
    }
    for (int i = d; i <= n; i++)
    {
        if (pre[i] - mini[i - d] >= 0)
            return true;
    }
    return false;
}
int maximum_avg_sum()
{
    int ans = -1.0;
    int low = *min_element(a.begin(), a.end());
    int high = *max_element(a.begin(), a.end());
    while (high >= low)
    {
        int mid = low + (high - low) / 2.0;
        if (check(mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}
void solve()
{
    cin >> n >> d;
    a.resize(n);
    for (auto &i : a)
        cin >> i;
    cout << maximum_avg_sum() << endl;
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