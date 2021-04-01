#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Graph
{
    unordered_map<T, list<pair<T, int>>> l;

public:
    void addEdge(T x, T y, int wt)
    {
        l[x].emplace_back(make_pair(y, wt));
        l[y].emplace_back(make_pair(x, wt));
    }
    int primMST(T src)
    {
        map<T, int> key;
        int res = 0;
        for (auto x : l)
            key[x.first] = INT_MAX;
        key[src] = 0;
        map<T, bool> mSet;
        for (auto x : l)
            mSet[x.first] = false;
        for (int count = 0; count < l.size(); count++)
        {
            T u = -1;
            for (auto x : l)
                if (!mSet[x.first] && (u == -1 || key[x.first] < key[u]))
                    u = x.first;
            mSet[u] = true;
            res += key[u];
            for (auto v : l[u])
            {
                if (!mSet[v.first])
                    key[v.first] = min(key[v.first], v.second);
            }
        }
        return res;
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1, 5);
    g.addEdge(1, 3, 15);
    g.addEdge(0, 2, 8);
    g.addEdge(1, 2, 10);
    g.addEdge(2, 3, 20);
    cout << g.primMST(0);
}
