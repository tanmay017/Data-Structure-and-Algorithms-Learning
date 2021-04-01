#include <bits/stdc++.h>
using namespace std;

bool comp(int x, int y)
{
    return (x > y);
}

void printArr(vector<int> v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), comp);
    printArr(v);
}