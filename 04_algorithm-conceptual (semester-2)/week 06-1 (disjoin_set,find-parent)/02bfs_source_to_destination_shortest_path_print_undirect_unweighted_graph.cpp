#include<bits/stdc++.h>
using namespace std;

const int mxN = 1005;
vector<int> adj_list[mxN];
vector<bool> visited;
vector<int> parent;

// find path function
vector<int> find_path(int dist)
{
    int x = dist;
    vector<int> path;

    while(x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }

    reverse(path.begin(), path.end());

    return path;
}

vector<int> bfs(int src, int dist)
{
    queue<int> pq;

    visited[src] = true;
    pq.push(src);

    vector<int> path = {-1};

    while(pq.empty() == false)
    {
        int head = pq.front();
        pq.pop();

        if(head == dist)
        {
            path = find_path(dist);
            return path;
        }

        for(int i=0; i<adj_list[head].size(); i++)
        {
            int child = adj_list[head][i];

            if(visited[child] == false)
            {
                visited[child] = true;
                pq.push(child);

                parent[child] = head;
            }
        }

    }

    return path;

}

int main()
{
    int nodes,edges;
    cin >> nodes >> edges;

    visited.resize(nodes, false);// initialize all value -1 and size n
    parent.resize(nodes, -1); // initialize all value -1 and size n

    for(int i=0; i<edges; i++)
    {
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int src,destination;
    cin >> src >> destination;

    vector<int> path = bfs(src, destination);

    for(int node : path)
        cout<< node <<" ";
    cout<<endl;


    return 0;
}
