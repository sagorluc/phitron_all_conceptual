#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ios ios::sync_with_stdio(false); cin.tie(NULL);

ll mod = 1e9+7;

ll solve(ll n, ll m, vector<vector<char>>& grid, vector<vector<ll>>& dp)
{
    /// base case
    if(n == 0 and m == 0)
        return 1;

    /// check if the result already exists
    if(dp[n][m] != -1)
        return dp[n][m];

    /// calculate the result from smaller sub-problem
    int ans = 0;

    if(n > 0 and grid[n][m] != '#')
        ans = ans + solve(n-1, m, grid, dp) % mod;

    if(m > 0 and grid[n][m] != '#')
        ans = ans + solve(n, m-1, grid, dp) % mod;

    dp[n][m] = ans % mod;
    return dp[n][m];

}

int main()
{
    ios;
    ll n,m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m,'a')); /// initialize vector
    for(ll i=0; i<n; i++)
        for(ll j=0; j<m; j++)
            cin >> grid[i][j];

    vector<vector<ll>> dp(n+5, vector<ll>(m+5, -1)); /// initialize vector n,m set value -1

    ll res = solve(n-1,m-1,grid,dp);

    cout<< res <<"\n";

                    return 0;
}
