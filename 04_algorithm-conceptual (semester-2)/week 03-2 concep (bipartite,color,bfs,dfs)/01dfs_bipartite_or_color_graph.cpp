#include<bits/stdc++.h>
using namespace std;

const int mxN = 2e5;
int visited[mxN];
vector<int> adj_list[mxN];
int color[mxN];

bool dfs(int src_node)
{
    visited[src_node] = true;

    for(int child_node : adj_list[src_node])
    {
        if(visited[child_node] == 0)
        {
            if(color[src_node] == 1)
                color[child_node] = 2; // blue color
            else
                color[child_node] = 1;

            bool bi_colorable = dfs(child_node);

            if(bi_colorable == false)
                return false;
        }
        else if(color[src_node] == color[child_node])
            return false;
    }
    visited[src_node] = 2; // blue color
    return true;

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

    bool ok = true;

    for(int i=1; i<=nodes; i++)
    {
        if(visited[i] == 0)
        {
            color[i] = 1; // green color
            bool can_color = dfs(i);

            if(can_color == false)
            {
                ok = false;
                break;
            }
        }

    }
    if(ok)
    {
        for(int i=1; i<=nodes; i++)
            cout<<color[i]<<" ";
        cout<<"\n";
    }
    else
        cout<<"IMPOSSIBLE\n";




    return 0;
}
