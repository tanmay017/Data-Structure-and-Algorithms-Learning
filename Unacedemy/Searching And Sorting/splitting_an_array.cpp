#include <bits/stdc++.h> // https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/B // Correct Solution
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

int k;
vi a;

bool check(int mid)
{
    int count = 1;
    int currSum = 0;
    for (int i = 0; i < (int)a.size(); i++)
    {
        if (a[i] + currSum <= mid)
        {
            currSum += a[i];
        }
        else
        {
            count++;
            currSum = a[i];
        }
    }
    return count <= k;
}
void solve()
{
    int n;
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int low = *max_element(a.begin(), a.end());
    int high = accumulate(a.begin(), a.end(), 0LL);
    int mid = low + (high - low) / 2;
    int ans = -1;
    while (high >= low)
    {
        if (check(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = low + (high - low) / 2;
    }
    cout << ans << endl;
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