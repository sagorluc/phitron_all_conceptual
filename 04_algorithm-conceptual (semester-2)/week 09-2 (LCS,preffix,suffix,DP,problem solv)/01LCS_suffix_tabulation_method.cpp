#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 9;
int dp[N][N];

int main()
{
    string x,y;
    cin >> x >> y;

    int n = x.size();
    int m = y.size();

    /// base case
    for(int row=0; row<=n; row++)
        dp[row][0] = 0;

    for(int col=0; col<=m; col++)
        dp[0][col] = 0;

    /// loop over the state
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=m; col++)
        {
            if(x[row-1] == y[col-1])
                dp[row][col] = 1 + dp[row-1][col-1];
            else
                dp[row][col] = max(dp[row-1][col], dp[row][col-1]);
        }
    }

    for(int row=0; row<=n; row++)
    {
        for(int col=0; col<=m; col++)
            cout<< dp[row][col]<<" ";
        cout<< endl;
    }

    cout<< dp[n][m] <<"\n";

    return 0;
}
