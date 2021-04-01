#include <bits/stdc++.h> // https://www.interviewbit.com/problems/painters-partition-problem/ // Correct Solution
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
int a, b, n;
vi c;
bool check(int x)
{
    int workerCount = 1;
    int currTime = 0;
    for (int i = 0; i < n; i++)
    {
        if (currTime + c[i] * b > x)
        {
            workerCount++;
            currTime = 0;
        }
        if (currTime + c[i] * b > x)
            return false;
        currTime += c[i] * b;
    }
    return workerCount <= a;
}
void solve()
{
    cin >> a >> b >> n;
    c.resize(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    int low = *max_element(c.begin(), c.end());
    int high = accumulate(c.begin(), c.end(), 0) * b;
    int ans = -1;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (check(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << ans << endl;
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