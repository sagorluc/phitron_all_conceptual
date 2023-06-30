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

    int n,m,k;
    cin >> n >> m >> k;
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin >> u >> v;
    }

    vector<pair<string, pair<int,int>>> op;
    string s;

    for(int i=0; i<k; i++)
    {
        int a,b;
        cin >> s >> a >> b;

        op.push_back({s,make_pair(a,b)});
    }

    vector<string> ans;

    while(op.size())
    {
        int u = op.back().second.first;
        int v = op.back().second.second;

        if(op.back().first == "cut")
            _union(u,v);
        else
        {
            if(_find(u) == _find(v))
                ans.push_back("YES");
            else
                ans.push_back("NO");
        }
        op.pop_back();
    }

    for(auto it=ans.rbegin(); it!=ans.rend(); it++)
        cout<< *it <<"\n";



    return 0;
}
