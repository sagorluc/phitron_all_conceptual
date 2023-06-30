#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e5 + 10;
int visited[mxN];
vector<int> adj_list[mxN];

void dfs(int src_node)
{
    visited[src_node] = true;

    for(int adj_node : adj_list[src_node])
    {
        if(visited[adj_node] == 0)
            dfs(adj_node);

    }

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

    vector<int> ans;

    for(int i=1; i<=nodes; i++)
    {
        if(visited[i] == false)
        {
            ans.push_back(i);
            dfs(i);
        }
    }

    // corner case
    if(ans.size() <= 1)
        cout<<"0\n";
    else
    {
        vector<pair<int, int>> rodes;

        for(int i=0; i<ans.size()-1; i++)
            rodes.push_back({ans[i], ans[i+1]});
        cout<< rodes.size() <<"\n";

        for(auto val : rodes)
            cout<< val.first <<" "<<val.second<<"\n";
    }

    return 0;
}
