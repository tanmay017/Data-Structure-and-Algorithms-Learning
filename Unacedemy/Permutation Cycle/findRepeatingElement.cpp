#include <bits/stdc++.h>
using namespace std;

int findRepeating(vector<int> &a)
{
    int slow = a[0];
    int fast = a[0];
    do
    {
        slow = a[slow];
        fast = a[a[fast]];
    } while (slow != fast);
    slow = a[0];
    while (slow != fast)
    {
        slow = a[slow];
        fast = a[fast];
    }
    return slow;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    cout << findRepeating(v);
}