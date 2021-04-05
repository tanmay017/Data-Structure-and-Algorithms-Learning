#include <bits/stdc++.h> // https://www.codechef.com/problems/COOK82C // correct solution
using namespace std;

#define int long long
#define endl '\n' // Remove if Interactive Question
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pi>
#define mii map<int, int>
#define REP(i, x, y) for (int i = x; i < y; i++)
#define F first
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

void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (auto &i : a)
        cin >> i;
    vi q(m);
    for (auto &i : q)
        cin >> i;
    sort(a.begin(), a.end(), greater<int>());
    int moves = 0;
    queue<int> q1;
    for (auto i : a)
        q1.push(i);
    queue<int> q2;
    int prev = -1;
    int ctr = 0;
    while (!q1.empty() && moves < q[m - 1])
    {
        if (q2.empty() || q1.front() > q2.front())
        {
            prev = q1.front();
            q1.pop();
            int temp = prev / 2;
            if (temp > 0)
                q2.push(temp);
        }
        else
        {
            prev = q2.front();
            q2.pop();
            int temp = prev / 2;
            if (temp > 0)
                q2.push(temp);
        }
        moves++;
        if (q[ctr] == moves)
        {
            cout << prev << endl;
            ctr++;
        }
    }

    while (moves < q[m - 1])
    {
        prev = q2.front();
        q2.pop();
        int temp = prev / 2;
        if (temp > 0)
            q2.push(temp);
        moves++;
        if (q[ctr] == moves)
        {
            cout << prev << endl;
            ctr++;
        }
    }
}

int32_t main()
{
    c_p_c();

    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    c_p_c2();
}