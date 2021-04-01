#include <bits/stdc++.h> // https://cses.fi/problemset/task/1091 // Correct // Runtime Error in CSES
using namespace std;

#define int long long
#define vi vector<int>
#define mii map<int, int>
#define REP(i, x, y) for (int i = x; i < y; i++)
#define F first
#define mp make_pair
#define S second
#define EB emplace_back
#define PRES(c, x) ((c).find(x) != (c).end())

int32_t main()
{
    clock_t begin = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    multiset<int> h;
    vi t(m);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        h.insert(temp);
    }
    for (auto &i : t)
        cin >> i;

    for (auto x : t)
    {
        if (h.empty())
        {
            cout << -1 << endl;
            continue;
        }
        auto it = h.upper_bound(x);
        it--;
        if (*it <= x)
        {
            cout << *it << endl;
            h.erase(it);
        }
        else
        {
            cout << -1 << endl;
        }
    }
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
}