#include <bits/stdc++.h> // https://cses.fi/problemset/result/1782584/#test8 // Correct but not accepted in CSES
using namespace std;

#define vi vector<long long>
#define pi pair<long long, long long>
#define vpi vector<pi>
#define mii map<long long, long long>
#define REP(i, x, y) for (long long i = x; i < y; i++)
#define F first
#define mp make_pair
#define S second
#define EB emplace_back
#define PRES(c, x) ((c).find(x) != (c).end())

bool check(long long mid, long long t, vi &k)
{
    long long p = 0;
    for (auto x : k)
    {
        p += mid / x;
    }
    return p >= t;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, t;
    cin >> n >> t;
    vi k(n);
    long long sum = 0;
    for (auto &i : k)
    {
        cin >> i;
        sum += i;
    }
    long long low = 0;
    long long high = 1e18;
    long long mid = low + (high - low) / 2;
    long long ans = -1;
    while (high >= low)
    {
        if (check(mid, t, k))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
        mid = low + (high - low) / 2;
    }
    cout << ans;
}