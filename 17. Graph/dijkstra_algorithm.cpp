#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    unordered_map<T, list<pair<T, int>>> l;

public:
    void addEdge(T x, T y, bool bidir, int wt)
    {
        l[x].push_back(make_pair(y, wt));
        if (bidir)
            l[y].push_back(make_pair(x, wt));
    }
    void dijkstra(T src)
    {
        map<T, int> dist;
        set<pair<int, T>> setds;
        for (auto x : l)
            dist[x.first] = INT_MAX;
        dist[src] = 0;
        setds.insert(make_pair(0, src));
        while (!setds.empty())
        {
            pair<int, T> temp = *(setds.begin());
            T u = temp.second;
            setds.erase(setds.begin());
            for (auto x : l[u])
            {
                T v = x.first;
                int weight = x.second;
                if (dist[v] > dist[u] + weight)
                {
                    if (dist[v] != INT_MAX)
                        setds.erase(setds.find(make_pair(dist[v], v)));
                    dist[v] = dist[u] + weight;
                    setds.insert(make_pair(dist[v], v));
                }
            }
        }
        for (auto x : dist)
            cout << x.first << " " << x.second << endl;
    }
};
int main()
{
    Graph<string> g;
    g.addEdge("Delhi", "Mumbai", true, 6);
    g.addEdge("Delhi", "Kolkata", true, 4);
    g.addEdge("Mumbai", "Bengaluru", true, 6);
    g.addEdge("Kolkata", "Pune", true, 2);
    g.addEdge("Bengaluru", "Chennai", true, 1);
    g.addEdge("Pune", "Chennai", true, 11);
    g.addEdge("Pune", "Bengaluru", true, 3);
    g.addEdge("Mumbai", "Kolkata", true, 1);
    g.dijkstra("Delhi");
}