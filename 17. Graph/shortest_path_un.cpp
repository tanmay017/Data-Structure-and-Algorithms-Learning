#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> l;
    int size; // Number of Vertices
public:
    Graph(int n)
    {
        size = n;
    }
    void addEdge(T x, T y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    vector<T> shortestPath(T src)
    {
        vector<int> path(size, 0);
        map<T, bool> visited;
        queue<T> q;
        q.push(src);
        visited[src] = true;
        int dist = 0;
        while (!q.empty())
        {
            int count = q.size();
            for (int i = 0; i < count; i++)
            {
                T curr = q.front();
                q.pop();
                path[curr] = dist;
                for (auto nbr : l[curr])
                {
                    if (!visited[nbr])
                    {
                        q.push(nbr);
                        visited[nbr] = true;
                    }
                }
            }
            dist++;
        }
        return path;
    }
    void printArr(vector<int> &arr)
    {
        for (auto x : arr)
            cout << x << " ";
        cout << endl;
    }
};

int main()
{
    Graph<int> g(6);
    g.addEdge(0, 4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    vector<int> shortest_path = g.shortestPath(0);
    g.printArr(shortest_path);
}