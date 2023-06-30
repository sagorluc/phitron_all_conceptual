#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
vector<ll> ans;

map<ll, vector<ll>> adj;
map<ll, bool> visited;
bool found = false;

void bfs(ll src)
{
    queue<ll>q;

    visited[src] = true;
    q.push(src);
    ans.push_back(src);

    while(q.empty() == false)
    {
        if(ans.size() == n)
        {
            found = true;
            return;
        }

       ll parent = q.front();
       q.pop();

       for(ll child : adj[parent])
       {
           if((parent * 2 )== child && !visited[child])
           {
               q.push(child);
               visited[child] = true;
               ans.push_back(child);
           }
           else if((parent % 3 == 0) && (parent / 3 ) == child && !visited[child])
           {
               q.push(child);
               visited[child] = true;
               ans.push_back(child);

           }
       }
    }


}

void init()
{
    ans.clear();
    visited.clear();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    vector<ll> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    for(int i=0; i< v.size(); i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            if(i != j)
                adj[v[i]].push_back(v[j]);
        }
    }

    for(auto val : adj)
    {
        bfs(val.first);

        if(found)
            break;
        init();
    }

    for(auto val : ans)
        cout<< val <<" ";


    return 0;
}
