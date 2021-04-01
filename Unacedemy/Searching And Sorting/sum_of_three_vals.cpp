#include <bits/stdc++.h> // https://cses.fi/problemset/task/1641/ // Correct Solution
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
    int n, x;
    cin >> n >> x;
    vi og(n);
    vpi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        og[i] = a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int low = 0;
        int high = n - 1;
        while (high > low)
        {
            int sum = og[i] + a[low].first + a[high].first;
            if (a[low].second == i + 1)
                low++;
            else if (a[high].second == i + 1)
                high--;
            else if (sum > x)
                high--;
            else if (sum < x)
                low++;
            else
            {
                cout << i + 1 << " " << a[low].second << " " << a[high].second;
                return;
            }
        }
    }
    cout << "IMPOSSIBLE";
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