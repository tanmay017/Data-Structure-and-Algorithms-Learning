#include <bits/stdc++.h> // See self paced DSA for Explanation
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> l;

public:
    void addEdge(T x, T y)
    {
        l[x].emplace_back(y);
    }
    bool cycleDetector_helper(T node, map<T, bool> &visited, bool recSt[])
    {
        visited[node] = true;
        recSt[node] = true;
        for (auto nbr : l[node])
        {
            if (!visited[nbr] && cycleDetector_helper(nbr, visited, recSt))
                return true;
            else if (recSt[nbr] == true)
                return true;
        }
        recSt[node] = false;
        return false;
    }
    bool cycleDetector()
    {
        map<T, bool> visited;
        for (auto x : l) // Does Not Required for Undirected Graph
            visited[x.first] = false;
        bool recSt[visited.size()];
        for (int i = 0; i < visited.size(); i++)
            recSt[i] = false;
        for (int i = 0; i < visited.size(); i++) // Loop is not required for Undirected Graph it is to ensure that all components are visited
            if (!visited[i])
                return cycleDetector_helper(i, visited, recSt);
        return false;
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 6);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 1);
    g.addEdge(3, 4);
    cout << (g.cycleDetector() == true ? "Yes, Graph Contains Cycle" : "No,Graph Does Not Contains Cycle");
}