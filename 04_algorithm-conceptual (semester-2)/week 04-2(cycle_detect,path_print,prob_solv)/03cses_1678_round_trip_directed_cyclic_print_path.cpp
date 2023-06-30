#include <bits/stdc++.h>

using namespace std;
const int maxN = 1e5+1;

int n, m;

int start = 0, finish = 0, p[maxN], vis[maxN];
vector<int> ans, adj_list[maxN];

void dfs(int u)
{
    vis[u] = 1;
    for(int v : adj_list[u])
    {
        if(vis[v] == 0)
        {
            p[v] = u;
            dfs(v);

            if(start != 0)
            {
                return;
            }
        }
        else if(vis[v] == 1)
        {
            finish = u;
            start = v;
            return;
        }
    }
    vis[u] = 2;
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    for(int i = 1; i <= n and start == 0; i++)
        if(vis[i] == 0)
            dfs(i);

    if(start == 0)
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    ans.push_back(start);

    for(int u = finish; u != start; u = p[u])
        ans.push_back(u);

    ans.push_back(start);

    reverse(ans.begin(), ans.end());

    int K = (int) ans.size();
    cout << K << '\n';

    for(int i = 0; i < K; i++)
        cout << ans[i] << ' ';

    cout << '\n';
}
