#include<bits/stdc++.h>
using namespace std;

const int maxN = 10000;
vector<int> adj_list[maxN];

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

    for(int i=0; i<n; i++)
    {
        cout<< i <<"->";
        for(auto it : adj_list[i])
            cout<< it <<" ";
        cout<<"\n";
    }


    return 0;
}
