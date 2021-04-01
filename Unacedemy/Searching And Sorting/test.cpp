#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 7, 7, 8, 8, 10};
    auto it = lower_bound(v.begin(), v.end(), 8);
    cout << it - v.begin();
}