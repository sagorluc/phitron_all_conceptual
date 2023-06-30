#include<bits/stdc++.h>
using namespace std;

const int N = 25;
const int M = 105;
vector<vector<int>> dp(N, vector<int>(M, -1));

int mxx_sum(vector<int>&wt, vector<int>&vl, int sz, int wei)
{
    /// base case
    if(sz == 0 or wei == 0)
        return 0;

    /// check if the result already exists
    if(dp[sz][wei] != -1)
        return dp[sz][wei];

    /// two choice diagram
    int ans = 0;
    if(wt[sz-1] <= wei)
    {
        ans = max(vl[sz-1] + mxx_sum(wt,vl,sz-1,wei-wt[sz-1]),
                  mxx_sum(wt,vl,sz-1,wei));
        return ans;
    }
    else
        return mxx_sum(wt,vl,sz-1,wei);

    dp[sz][wei] = ans;
    return ans;

}
int main()
{
    int n,w;
    cin >> n >> w;

    vector<int> wt(n), val(n);

    for(int i=0; i<n; i++)
    {
        int weight, value;
        cin >> weight >> value;
        wt[i] = weight;
        val[i] = value;
    }


    int res = mxx_sum(wt,val,n,w);
    cout<< res <<endl;


    return  0;
}

