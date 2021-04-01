#include <bits/stdc++.h>
using namespace std;

bool sameXorPairs(vector<int> arr1, vector<int> arr2, int n)
{
    int v = 0;
    unordered_set<int> set;
    for (int i = 0; i < n; i++)
    {
        v ^= arr1[i];
        v ^= arr2[i];
        set.insert(arr2[i]);
    }
    for (int i = 0; i < n; i++)
        if (set.count(v ^ arr1[i]) == 0)
            return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    cout << (sameXorPairs(arr1, arr2, n) ? "YES" : "NO") << endl;
}