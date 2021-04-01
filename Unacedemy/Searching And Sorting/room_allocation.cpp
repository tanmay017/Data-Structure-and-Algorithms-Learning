#include <bits/stdc++.h> // https://cses.fi/problemset/task/1164 // Correct Solution // Editorial : https://codeforces.com/blog/entry/83295
using namespace std;

#define int long long
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
void solve()
{
    int n;
    cin >> n;
    multimap<pair<int, int>, int> m;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        m.insert({{a, b}, i});
    }
    int count = 0;
    vi ans(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        int a = it->first.first;
        int b = it->first.second;
        int cnt;
        if (pq.empty() || pq.top().first >= a)
            cnt = ++count;
        else
        {
            cnt = pq.top().second;
            pq.pop();
        }
        pq.push({b, cnt});
        ans[it->second] = cnt;
    }
    cout << count << endl;
    for (auto x : ans)
        cout << x << " ";
}
int32_t main()
{
    clock_t begin = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
}