#include <bits/stdc++.h> //best practise could be used in all cases
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
    void printAdjList()
    {
        for (auto p : l)
        {
            T city = p.first;
            list<pair<T, int>> nbrs = p.second;
            cout << "City " << city << " -> ";
            for (auto nbr : nbrs)
            {
                string dest = nbr.first;
                int dist = nbr.second;
                cout << "(" << dest << "," << dist << ") ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph<string> g;
    g.addEdge("A", "B", true, 20);
    g.addEdge("A", "C", true, 10);
    g.addEdge("A", "D", false, 50);
    g.addEdge("C", "D", true, 30);
    g.addEdge("D", "B", true, 40);
    g.printAdjList();
}