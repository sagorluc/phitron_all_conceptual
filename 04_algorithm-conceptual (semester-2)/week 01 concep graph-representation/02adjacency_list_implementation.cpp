#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes, edge;
    cin >> nodes >> edge;

    vector<int> adj_list[nodes + 1];

    for(int i=1; i<=edge; i++)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    for(int i=0; i<=nodes; i++)
    {
        cout<< i <<"->";

        for(auto j : adj_list[i])
            cout<< j <<" ";

        cout<< "\n";
    }

    return 0;
}
