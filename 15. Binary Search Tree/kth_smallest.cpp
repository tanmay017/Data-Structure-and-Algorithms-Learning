#include <bits/stdc++.h>
using namespace std;

int kthSmallest(set<int> &s, int k)
{
    auto it = s.begin();
    for (int i = 0; i < k - 1; i++)
        it++;
    return *it;
}

int main()
{
    set<int> s;
    int k = 3;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(2);
    cout << kthSmallest(s, k);
}