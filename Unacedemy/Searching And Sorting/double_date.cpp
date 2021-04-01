#include <bits/stdc++.h> // https://www.codechef.com/problems/DBLDATE // correct solution
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
int x1, x2, y_1, y2;
double relDis(double r)
{
    double dis1 = sqrt(pow(x1 - r, 2) + pow(y_1, 2));
    double dis2 = sqrt(pow(x2 - r, 2) + pow(y2, 2));

    return dis1 + dis2;
}
void solve()
{
    cin >> x1 >> y_1 >> x2 >> y2;
    double low = min(x1, x2);
    double high = max(x1, x2);
    for (int _ = 0; _ < 62; _++) // ideally we should keep this 100 for being in safer side
    {
        double mid1 = low + (high - low) / 3.0;
        double mid2 = high - (high - low) / 3.0;
        if (relDis(mid1) >= relDis(mid2))
            low = mid1;
        else
            high = mid2;
    }
    cout << fixed << setprecision(7) << relDis(low) << endl;
}

int32_t main()
{
    c_p_c();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    c_p_c2();
}