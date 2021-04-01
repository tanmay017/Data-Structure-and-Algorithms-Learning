#include <bits/stdc++.h> // https://www.codechef.com/CLWC2021/problems/CLWI21C/ // Correct Solution
using namespace std;

#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define rfo(i, a, b) for (int i = a; i >= b; i--)
#define ff first
#define ss second
#define ld long double
#define vii vector<int>
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define pob pop_back
#define pq priority_queue
#define uom unordered_map
#define mii map<int, int>
#define mll map<ll, ll>
#define mod 1000000007
#define pii pair<int, int>
#define pll pair<ll, ll>
#define endl "\n"
void INPUT()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

ll modpower(ll base, ll pow, ll mod_)
{
    base %= mod_;
    ll result = 1;
    while (pow)
    {
        if (pow & 1)
            result = (result * base) % mod_;
        base = (base * base) % mod_;
        pow >>= 1LL;
    }
    return result;
}

vector<long long> parent;
int find(int x)
{
    if (x != parent[x])
    {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void join(int x1, int x2)
{
    x1 = find(x1);
    x2 = find(x2);
    if (x1 != x2)
    {
        parent[x1] = x2;
    }
    return;
}

//------------------------------------------------------------------------------
ll l, b, h, n;
bool good(ll m)
{
    ll x = m / l;
    ll y = m / b;
    ll z = m / h;
    return x * y * z >= n;
}
void solve()
{
    cin >> l >> b >> h >> n;
    ll l = -1, r = 1e6;
    while (r > l + 1)
    {
        ll m = (l + r) / 2;
        if (good(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << r << endl;
}

int main()
{
    FIO;
    INPUT();

    int t;
    t = 1;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
