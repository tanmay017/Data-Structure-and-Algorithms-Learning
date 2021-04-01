#include <bits/stdc++.h>
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

void solve()
{
    int *arr;
    arr = new int[7];
    arr[0] = 3;
    arr[1] = 9;
    arr[2] = 4;
    arr[3] = 7;
    arr[4] = 13;
    arr[5] = 12;
    arr[6] = 11;
    cout << arr[3] << " ";
    cout << (arr + 1)[2] << " ";
    cout << (arr + 2)[1] << " ";
    cout << (arr + 3)[0] << " ";
    cout << (arr + 4)[-1] << " ";
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