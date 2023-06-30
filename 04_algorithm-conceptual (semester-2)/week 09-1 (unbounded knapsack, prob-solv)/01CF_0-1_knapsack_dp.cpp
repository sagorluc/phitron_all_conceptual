#include<bits/stdc++.h>
using namespace std;

int mxx_sum(vector<int>&wt, vector<int>&vl, int sz, int wei)
{
    /// base case
    if(sz == 0 or wei == 0)
        return 0;

    /// two choice diagram
    if(wt[sz-1] <= wei)
        return max(vl[sz-1] + mxx_sum(wt,vl,sz-1,wei-wt[sz-1]),
                   mxx_sum(wt,vl,sz-1,wei));
    else
        return mxx_sum(wt,vl,sz-1,wei);

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
