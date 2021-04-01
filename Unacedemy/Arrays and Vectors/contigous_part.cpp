#include <bits/stdc++.h>
using namespace std;

int countContigousPart(int a[], int n)
{
    int pre_max[n];
    int suf_min[n];
    for (int i = 0; i < n; i++)
        (i == 0) ? pre_max[i] = a[i] : pre_max[i] = max(pre_max[i - 1], a[i]);
    for (int i = n - 1; i >= 0; i--)
        (i == n - 1) ? suf_min[i] = a[i] : suf_min[i] = min(suf_min[i + 1], a[i]);
    int count = 0;
    for (int i = 0; i < n; i++)
        cout << pre_max[i] << " " << suf_min[i] << endl;
    for (int i = 0; i < n; i++)
        if (pre_max[i] <= suf_min[i + 1])
            count++;
    return count;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << countContigousPart(a, n);
}