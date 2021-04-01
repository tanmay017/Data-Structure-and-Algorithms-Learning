#include <bits/stdc++.h>
using namespace std;

void DFSRec(vector<int> adj[],int s,bool visited[])
{
    visited[s] = true;
    cout <<s<<" ";
    for(auto u : adj[s])
        if(visited[u] == false)
            DFSRec(adj,u,visited);
}

void DFS (vector<int> adj[],int V) //for dis-connected graph
{
    bool visited[V];
    for(int i = 0;i < V;i++)
        visited[i] = false;
    for(int i = 0;i < V;i++)
        if(visited[i] == false)
            DFSRec(adj,i,visited);
}

void DFS (vector<int> adj[],int V,int s) //connected graph
{
    bool visited[V];
    for(int i = 0;i < V;i++)
        visited[i] = false;
    DFSRec(adj,s,visited);
}

void addEdge(vector<int> adj[],int v,int u)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}

int main()
{
    int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2);
	addEdge(adj,3,4);
	cout << "Following is Depth First Traversal for disconnected graphs: "<< endl; 
	DFS(adj,V); 
	return 0; 
}