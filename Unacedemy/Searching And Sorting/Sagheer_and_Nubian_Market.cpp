#include <bits/stdc++.h> // https://codeforces.com/contest/812/problem/C // Correct Solution
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

int n, s;
vi a;
int calcMoney(int k)
{
    int money = 0;
    vi temp(n);
    for (int i = 0; i < n; i++)
        temp[i] = a[i] + (i + 1) * k;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < k; i++)
        money += temp[i];
    return money;
}

bool check(int k)
{
    int money = s;
    int count = 0;
    vi temp(n);
    for (int i = 0; i < n; i++)
        temp[i] = a[i] + (i + 1) * k;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < n; i++)
    {
        if (money < temp[i])
            break;
        count++;
        money -= temp[i];
    }
    return count >= k;
}

void solve()
{
    cin >> n >> s;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int low = 0;
    int high = n;
    int ans = -1;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (check(mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << ans << " " << calcMoney(ans);
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