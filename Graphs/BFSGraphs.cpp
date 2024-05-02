#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int adjList()
{
    int n, m;
    cin >> n >> m;
    // adjacency list for undirected graph
    // time complexity: O(2E)
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}

vector<int> main(int size,vector<int> adj[]){
    int vis[size] = {0};
    vis[0] = 1;
    queue<int> q;
    // 0 indexed adj list
    q.push(0);
    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
        
    }
    return bfs;
}