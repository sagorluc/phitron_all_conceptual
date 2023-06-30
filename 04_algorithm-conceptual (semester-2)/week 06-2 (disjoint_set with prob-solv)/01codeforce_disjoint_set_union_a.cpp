#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e5 + 10;
int parent[mxN];
int rnk[mxN];

int _find(int node)
{
    /// base case
    if(node == parent[node])
        return node;

    int x = _find(parent[node]);
    parent[node] = x;

    return parent[node];
}

void _union(int a, int b)
{
    a = _find(a);
    b = _find(b);

    if(rnk[a] < rnk[b])
        parent[a] = b;
    else if(rnk[b] < rnk[a])
        parent[b] = a;
    else
    {
        parent[b] = a;
        rnk[a]++;
    }

}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    /// set parent it's self
    for(int i=0; i<mxN; i++)
        parent[i] = i;

    int n,m;
    cin >> n >> m;
    for(int i=1; i<=m; i++)
    {
        string qu;
        cin >> qu;

        int u,v;
        cin >> u >> v;

        if(qu == "union")
            _union(u,v);
        else
        {
            if(_find(u) == _find(v))
                cout<< "YES\n";
            else
                cout<< "NO\n";
        }

    }

    /// print rank array
//    for(int i=1; i<=n; i++)
//        cout<< rnk[i] <<" ";
//    cout<< endl;
//
    /// print parent array
//    for(int i=1; i<=n; i++)
//        cout<< parent[i] <<" ";
//    cout<< endl;

    return 0;
}
