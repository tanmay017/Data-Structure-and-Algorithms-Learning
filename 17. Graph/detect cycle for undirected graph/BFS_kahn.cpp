#include <bits/stdc++.h> //this is derived from kahn's Algorithm
using namespace std; //refer self paced DSA

bool detectCycle(vector<int> adj[],int V) //cycle detection for directed graph
{
    vector<int> inDegree(V,0);
    queue<int> q;
    int count = 0;
    for(int u = 0;u < V;u++)
        for(auto x : adj[u])
            inDegree[x]++;

    for(int i = 0;i < V;i++)
        if(inDegree[i] == 0)
        {
            q.push(i);
            count++;
        }

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v : adj[u])
        {
            inDegree[v]--;
            if(inDegree[v] == 0)
            {
                q.push(v);
                count++;
            }
        }
    }
    return (count != V);
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
	addEdge(adj,0, 1); 
    addEdge(adj,4, 1); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 1);  
    if(detectCycle(adj,V)) 
        cout<<"Cycle Found";
    else
        cout<<"Cycle Not Found";
	return 0; 
}