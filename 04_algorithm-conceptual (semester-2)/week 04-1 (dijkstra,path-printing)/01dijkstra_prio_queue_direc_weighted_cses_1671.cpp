#include<bits/stdc++.h>
using namespace std;

/**
input: directed graph
6 8
1 2 10
1 3 15
2 6 15
2 4 12
3 5 10
4 6 1
4 5 2
6 5 5
output
0 10 15 22 24 23

*/

typedef long long ll;
const int mxN = 1e5 + 10;
const ll infi = 9e18;

int visited[mxN];
ll dis[mxN];
vector<pair<int, int>> adj_list[mxN];

void dijkstra(int src_node, int nodes)
{
    for(int i=1; i<=nodes; i++)
        dis[i] = infi;

    dis[src_node] = 0;

    // declare min heap initially
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq; //min heap

    pq.push({0, src_node}); // first-> distance, second-> value.

    while(pq.empty() == false)
    {
        ll cost = pq.top().first;
        int u  = pq.top().second;
        pq.pop();

        if(visited[u] == true)
            continue;
        else
            visited[u] = 1;

        for(auto child : adj_list[u])
        {
            int v = child.first;
            ll  c = child.second;

            // relaxtion
            if((cost + c) < dis[v])
            {
                dis[v] = (cost + c);
                pq.push({dis[v], v});
            }

        }

    }

}

int main()
{
    int nodes,edges;
    cin >> nodes >> edges;

    for(int i=0; i<edges; i++)
    {
        int u,v,w;
        cin >> u >> v >> w;

        adj_list[u].push_back({v, w});
    }

    int src = 1;
    dijkstra(src, nodes);

    // print the distance
    for(int i=1; i<=nodes; i++)
        cout<<dis[i]<<" ";
    cout<<"\n";

    return 0;
}
