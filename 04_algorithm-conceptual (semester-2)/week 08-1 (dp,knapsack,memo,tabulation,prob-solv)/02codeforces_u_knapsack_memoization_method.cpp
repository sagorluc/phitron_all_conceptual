
/// problem link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/u
#include<bits/stdc++.h>
using namespace std;

const int N = 25;
const int M = 105;
int dp[N][M];

int mxx_sum(vector<int>wt, vector<int> val, int sz, int wei)
{
    /// base case
    if(sz == 0 || wei == 0)
        return 0;

    /// check if the result already exists
    if(dp[sz][wei] != -1)
        return dp[sz][wei];

    /// implement choice diagram
    if(wt[sz-1] <= wei)
        return dp[sz][wei] = max(val[sz-1] + mxx_sum(wt,val,sz-1,wei - wt[sz-1]),
                   mxx_sum(wt,val,sz-1,wei)); /// 1. take 2. not take
    else
        return dp[sz][wei] = mxx_sum(wt,val,sz-1,wei); /// not take

}
int main()
{
    int n,w;
    cin >> n >> w;

    vector<int> wt, val;

    for(int i=1; i<=n; i++)
    {
        int weight, value;
        cin >> weight >> value;

        wt.push_back(weight);
        val.push_back(value);
    }

    for(int i=0; i<=n; i++)
        for(int j=0; j<=w; j++)
            dp[i][j] = -1;

    cout<<mxx_sum(wt,val,n,w)<<"\n";


    return 0;
}

