#include<bits/stdc++.h>
using namespace std;

const int mxN =  1000;
vector<int> adj_list[mxN];
bool visited[mxN];

void bfs(int src)
{
    queue<int> q;

    cout<< src <<" ";

    visited[src] = true;
    q.push(src);

    while(q.empty() == false)
    {
        int head = q.front();
        q.pop();

       // cout<< head <<" ";

        for(int adj_node : adj_list[head])
        {
            if(visited[adj_node] == 0)
            {
                visited[adj_node] = true;
                q.push(adj_node);
                cout<< adj_node <<" ";
            }
        }

    }
}

int main()
{
    int n,e;
    cin >> n >> e;

    for(int i=0; i<e; i++)
    {
        int u,v;

        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 3;
    bfs(src);



    return 0;
}
