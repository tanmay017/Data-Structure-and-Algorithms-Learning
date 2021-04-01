#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> l;

public:
    void AddEdge(T x, T y)
    {
        l[x].push_back(y);
    }
    void dfs(T node, map<T, bool> &visited, stack<T> &st)
    {
        visited[node] = true;
        for (auto nbr : l[node])
            if (!visited[nbr])
                dfs(nbr, visited, st);
        st.push(node);
    }
    void topologicalSort()
    {
        map<T, bool> visited;
        stack<T> st;
        for (auto x : l)
            if (!visited[x.first])
                dfs(x.first, visited, st);
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
};

int main()
{
    Graph<int> g;
    g.AddEdge(0, 1);
    g.AddEdge(0, 2);
    g.AddEdge(2, 3);
    g.AddEdge(1, 3);
    g.AddEdge(3, 4);
    g.AddEdge(3, 5);
    g.topologicalSort();
}