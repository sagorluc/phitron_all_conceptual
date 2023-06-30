#include<bits/stdc++.h>
using namespace std;

int dfs(int cordi_x,int cordi_y, int grid_n, int grid_m,
        vector<vector<int>>& matrix, vector<vector<int>>& dp)
{
    /// check if the result already exists
    if(dp[cordi_x][cordi_y] != -1)
        return dp[cordi_x][cordi_y];

    int ans = 1;
    /// moving up,down,left,right
    vector<vector<int>> dir = {{-1,0},{1,0},{0,1},{0,-1}};

    for(int i=0; i<4; i++)
    {
        int x = cordi_x + dir[i][0];
        int y = cordi_y + dir[i][1];

        if(x < 0 || x >= grid_n || y < 0 || y >= grid_m) /// valid cell
            continue;

        if(matrix[x][y] <= matrix[cordi_x][cordi_y]) /// less or equal
            continue;

        ans = max(ans, 1 + dfs(x,y,grid_n,grid_m,matrix,dp));
    }
    dp[cordi_x][cordi_y] = ans;
    return ans;


}

int longestIncreasingPath(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> dp(n+5, vector<int>(m+5,-1)); /// initialize -1

    int ans = 0;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            ans = max(ans, dfs(i,j,n,m,matrix,dp));

///    dp[n][m] = ans;
    return ans;

}
int main()
{
    int n,m;
    cin >> n >> m;

    vector<vector<int>> grid(n+5, vector<int>(m+5));

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> grid[i][j];

    cout<< longestIncreasingPath(grid) <<"\n";


    return 0;
}
