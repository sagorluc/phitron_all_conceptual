#include<bits/stdc++.h>
using namespace std;

const int maxN = 100;
int main()
{
    int nodes, edge;
    cin >> nodes >> edge;

    vector< pair<int, int> > adj_list[maxN + 123];

    for(int i=1; i<=edge; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }

    for(int i=0; i<=nodes; i++)
    {
        cout<< i <<"->";

        for(auto j : adj_list[i])
            cout<<"{"<< j.first <<", " << j.second <<"}"<<" ";

        cout<< "\n";
    }

    return 0;
}

