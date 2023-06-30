#include<bits/stdc++.h>
using namespace std;

/**
input
4 4
2 3
0 1
0 2
1 2

*/

vector<pair<int,int>> edge_list;
vector<int> parent;

// find parent of the root node
int find_parent(int x)
{
    if(parent[x] == -1)
        return x;

    return find_parent(parent[x]);
}

// set parent of other node
void union_operation(int x, int y)
{
    int parentA = find_parent(x);
    int parentB = find_parent(y);

    parent[parentA] = parentB;

}

int main()
{
    int nodes,edges;

    cin >> nodes >> edges;

    parent.resize(nodes, -1); // n-th size and all node parent initially -1

    for(int i=0; i<edges; i++)
    {
        int a,b;
        cin >> a >> b;

        edge_list.push_back({a,b});
    }

    bool cycle_detected = false;

    for(int i=0; i<edge_list.size(); i++)
    {
        pair<int, int> pr = edge_list[i];

        int a = pr.first;
        int b = pr.second;

        int parentA = find_parent(a);
        int parentB = find_parent(b);

        if(parentA == parentB)
        {
            cycle_detected = true;
            break;
        }
        else
        {
            union_operation(a,b);
        }
    }

    if(cycle_detected == true)
        cout<< "got cycle\n";
    else
        cout<< "no cycle\n";





    return 0;
}
