#include <bits/stdc++.h> // not correct
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

int32_t main()
{
    clock_t begin = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        for (auto &i : a)
            cin >> i;
        vpi sortedA(n);
        for (int i = 0; i < n; i++)
        {
            sortedA[i].first = a[i];
            sortedA[i].second = i;
        }
        sort(sortedA.begin(), sortedA.end());
        vi pre(n);
        pre[0] = sortedA[0].first;
        for (int i = 1; i < n; i++)
            pre[i] = pre[i - 1] + sortedA[i].first;
        int count = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (pre[i] >= sortedA[i + 1].first)
                count++;
            else
                break;
        }
        cout << count << endl;
        for (int i = n - count; i < n; i++)
            cout << sortedA[i].second + 1 << " ";
        cout << endl;
    }
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
}