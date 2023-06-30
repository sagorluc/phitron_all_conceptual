
/// problem link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/u
#include<bits/stdc++.h>
using namespace std;

int mxx_sum(vector<int> wt, vector<int> val, int sz, int wei)
{
    /// base case
    if(sz == 0 || wei == 0)
        return 0;

    /// implement choice diagram
    if(wt[sz-1] <= wei)
        return max(val[sz-1] + mxx_sum(wt,val,sz-1,wei - wt[sz-1]),
                   mxx_sum(wt,val,sz-1,wei)); /// 1. take 2. not take
    else
        return mxx_sum(wt,val,sz-1,wei); /// not take

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

    cout<<mxx_sum(wt,val,n,w)<<"\n";


    return 0;
}
