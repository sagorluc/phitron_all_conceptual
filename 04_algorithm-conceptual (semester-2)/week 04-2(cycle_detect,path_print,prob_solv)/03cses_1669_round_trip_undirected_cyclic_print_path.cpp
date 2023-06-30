#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> adj_list[N];
int visited[N];
int parent[N];
int start_point, end_point;

bool dfs_detect_cycle(int src_node)
{
    // selected node by visited array
    visited[src_node] = 1;

    // visit the adjacency node of selected node
    for(int adj_node : adj_list[src_node])
    {
        if(adj_node == parent[src_node])
            continue;

        // if not visited
        if(visited[adj_node] == false) // unvisited node
        {
            parent[adj_node] = src_node;

            bool ok = dfs_detect_cycle(adj_node); // apply dfs

            if(ok) // if detect cycle return true
                return true;

        }
        // if visited node return true
        if(visited[adj_node] == 1)
        {
            start_point = src_node;
            end_point = adj_node;
            return true;
        }
    }
    visited[src_node] = 2; // done node
    return false;

}

int main()
{
    int nodes,edges;

    cin >> nodes >> edges;

    while(edges--)
    {
        int u,v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    // print detecting cycle

    bool cycle = false;
    for(int i=1; i<=nodes; i++)
    {
        if(visited[i] == 0)
        {
            bool ok = dfs_detect_cycle(i);

            if(ok == true)
            {
                cycle = true;
                break;
            }
        }
    }

    if(cycle == true)
    {
        vector<int> cityes;

        cityes.push_back(start_point);

        int temp = start_point;

        // start until to end tracking all the path
        while(temp != end_point)
        {
            cityes.push_back(parent[temp]);
            temp = parent[temp];
        }
        cityes.push_back(start_point);

        // print the size of city
        cout<< cityes.size()<<"\n";

        // print the path of city
        for(int node : cityes)
            cout<<node<<" ";

    }
    else
        cout<<"IMPOSSIBLE\n";


    return 0;
}


