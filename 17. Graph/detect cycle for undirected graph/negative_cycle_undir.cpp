#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    map<T, list<pair<T, int>>> l;

public:
    void addEdge(T x, T y, int wt)
    {
        l[x].emplace_back(make_pair(y, wt));
    }
    bool detectNegativeCycle_helper(T node, map<T, bool> &visited, int recSt[])
    {
    }
    bool detectNegativeCycle()
    {
        map<T, bool> visited;
        for (auto x : l)
            visited[x.first] = false;
        bool recSt[visited.size()];
        for (int i = 0; i < visited.size(); i++)
            recSt[i] = false;
        for (int i = 0; i < visited.size(); i++)
            if (!visited[i])
                if (detectNegativeCycle_helper(i, visited, recSt))
                    return true;
        return false;
    }
};
int main()
{
    Graph<int> g;
    g.addEdge(0, 1, 3);
    g.addEdge(2, 1, -4);
    g.addEdge(1, 6, -2);
    g.addEdge(6, 7, -2);
    g.addEdge(7, 8, 3);
    g.addEdge(8, 1, 2);
    g.addEdge(2, 3, 3);
    g.addEdge(3, 4, 2);
    g.addEdge(4, 5, -2);
    g.addEdge(5, 3, -2);
}
