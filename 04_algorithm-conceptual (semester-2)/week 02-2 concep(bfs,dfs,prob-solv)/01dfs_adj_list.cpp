#include<bits/stdc++.h>
using namespace std;

const int mxN = 1000;
vector<int> adj_list[mxN];
int visited[mxN];

void dfs(int src)
{
    visited[src] = 1;
    cout<< src <<" ";

    for(int adj_node : adj_list[src])
        if(visited[adj_node] == 0)
            dfs(adj_node);

}

int main()
{
    int nodes,edges;
    cin >> nodes >> edges;

    for(int i=1; i<=edges; i++)
    {
        int u,v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }

    int src = 1;
    dfs(src);


    return 0;
}
