#include<bits/stdc++.h>
using namespace std;

const int mxN = 1010;
char grid[mxN][mxN];
int visited[mxN][mxN];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int dir[4] = {'D', 'R', 'U', 'L'};
pair<int, int> parent[mxN][mxN];
int n,e;

bool is_inside(pair<int, int> coordinate)
{
    int x = coordinate.first;
    int y = coordinate.second;

    if(x >= 1 && x <= n && y >= 1 && y <= e)
        return true;
    else
        return false;
}

void bfs(int x, int y, int n, int e)
{
    queue<pair<int, int>> q;
    q.push({x, y});

    visited[x][y] = true;

    parent[x][y] = {-1, -1}; // track the parent.

    while(q.empty() == false)
    {
        pair<int, int> head = q.front();
        q.pop();

        for(int i=0; i<4; i++)
        {
            int new_dx = head.first + dx[i];
            int new_dy = head.second + dy[i];

            if(is_inside(head)==true && !visited[new_dx][new_dy] && grid[new_dx][new_dy] != '#')
            {
                visited[new_dx][new_dy] = true;
                q.push({new_dx, new_dy});

                parent[new_dx][new_dy] = head;

            }
        }


    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> e;

    int start_x, start_y, end_x, end_y;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=e; j++)
        {
            cin >> grid[i][j];

            if(grid[i][j] == 'A')
            {
                start_x = i;
                start_y = j;
            }
            if(grid[i][j] == 'B')
            {
                end_x = i;
                end_y = j;
            }
        }
    }

    bfs(start_x, start_y, n, e);

    if(visited[end_x][end_y])
    {
        cout<<"YES\n";

        // trying reach destination to source

        vector<pair<int, int>> path;

        path.push_back({end_x, end_y});

        int x = end_x, y = end_y;

        while(parent[x][y] != make_pair(-1, -1))
        {
            // x = 3, y = 7 destination cell

            pair<int, int> p = parent[x][y];
            x = p.first, y = p.second;

            path.push_back({x, y});

        }

        // new reach source to destination by reverse
        reverse(path.begin(), path.end());

        string ans;

        for(int i=0; i<path.size()-1; i++)
        {
            for(int j=0; j<4; j++)
            {
                int dxx, dyy;
                // 2 + 0 = 2, 3 + (-1) = 2
                dxx = path[i].first + dx[j];
                dyy = path[i].second + dy[j];

                if(dxx == path[i+1].first && dyy == path[i+1].second)
                {
                    ans.push_back(dir[j]);
                    break;
                }
            }
        }
        cout<<ans.size()<<"\n";
        cout<< ans <<"\n";
    }
    else
        cout<<"NO\n";

    return 0;
}
