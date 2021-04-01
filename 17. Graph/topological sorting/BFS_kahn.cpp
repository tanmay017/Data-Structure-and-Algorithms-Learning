#include <bits/stdc++.h> //this is kahn's Algorithm
using namespace std;

void topologicalSort(vector<int> adj[],int V)
{
    vector<int> inDegree(V,0);
    queue<int> q;

    for(int u = 0;u < V;u++)
        for(auto x : adj[u])
            inDegree[x]++;

    for(int i = 0;i < V;i++)
        if(inDegree[i] == 0)
            q.push(i);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(auto v : adj[u])
        {
            inDegree[v]--;
            if(inDegree[v] == 0)
                q.push(v);
        }
    }
}

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    //inDegree[v]++; use this statement if you want to calculate inDegree during adding itself
}

int main()
{
    int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 2); 
    addEdge(adj,0, 3); 
    addEdge(adj,1, 3); 
    addEdge(adj,1, 4); 
    addEdge(adj,2, 3);  
    cout << "Following is a Topological Sort of\n"; 
    topologicalSort(adj,V);
	return 0; 
}