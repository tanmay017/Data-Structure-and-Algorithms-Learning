#include <bits/stdc++.h> // YouTube Explanation : https://youtu.be/tJkpxwg90KY
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> l;

public:
    void addEdge(T x, T y)
    {
        l[x].emplace_back(y);
        l[y].emplace_back(x);
    }
    bool cycleDetector_helper(T curr, map<T, bool> &visited, T parent)
    {
        visited[curr] = true;
        for (auto nbr : l[curr])
        {
            if (!visited[nbr])
            {
                // return cycleDector_helper(nbr, visited, curr); cannot use this statement because at the end loop will end and return false
                if (cycleDetector_helper(nbr, visited, curr))
                    return true;
            }
            else if (nbr != parent)
                return true;
        }
        return false;
    }
    bool cycleDetector()
    {
        map<T, bool> visited;
        return cycleDetector_helper(0, visited, -1);
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