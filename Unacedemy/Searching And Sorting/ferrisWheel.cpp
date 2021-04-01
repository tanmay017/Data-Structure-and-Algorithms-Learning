#include <bits/stdc++.h> // https://cses.fi/problemset/task/1090/ (Runtime Error)
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
    int n, x;
    cin >> n >> x;
    multiset<int> ms;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ms.insert(temp);
    }
    int ans = 0;
    while (!ms.empty())
    {
        ans++;
        int toFind = x - *ms.begin();
        ms.erase(ms.begin());
        if (ms.empty())
            break;
        auto it = ms.upper_bound(toFind);
        it--;
        if (*it <= toFind)
            ms.erase(it);
    }
    cout << ans;
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
}