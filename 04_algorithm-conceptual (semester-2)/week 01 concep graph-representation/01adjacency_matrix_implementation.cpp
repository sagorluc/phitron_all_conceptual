#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,m;
    cin >> n >> m;

    int adj_mat[n + 1][n + 1];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            adj_mat[i][j] = 0;

    for(int i=1; i<=m; i++)
    {
        int l, r;
        cin >> l >> r;

        adj_mat[l][r] = 1;
        adj_mat[r][l] = 1;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout<< adj_mat[i][j]<<" ";

        cout<<"\n";
    }


    return 0 ;
}


