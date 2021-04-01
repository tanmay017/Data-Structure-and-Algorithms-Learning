#include <bits/stdc++.h> // https://cses.fi/problemset/task/1084 // Correct Solution
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
    int n, m, k;
    cin >> n >> m >> k;
    vi des(n);
    for (int i = 0; i < n; i++)
        cin >> des[i];
    multiset<int> ms;
    int temp;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        ms.insert(temp);
    }
    int ans = 0;
    sort(des.begin(), des.end());
    for (int i = 0; i < n; i++)
    {
        auto it = ms.lower_bound(des[i] - k);
        if (it != ms.end())
        {
            if (*it <= des[i] + k)
            {
                ans++;
                ms.erase(it);
            }
        }
    }
    cout << ans;
}