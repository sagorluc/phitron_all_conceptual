
/// print how many ways we can make the target.

#include<bits/stdc++.h>
using namespace std;
const int N = 6010;

vector<vector<int>> dp(N, vector<int>(N, -1));

int mxx_sum(vector<int>&len, int sz, int target)
{
    /// base case
    if(target == 0)
        return 1;
    if(sz == 0)
        return 0;

    /// check if the result already exists
    if(dp[sz][target] != -1)
        return dp[sz][target];

    /// two choice diagram
    int ans;

    dp[sz][target] =  mxx_sum(len,sz-1, target); /// not taking

    if(len[sz-1] <= target)
        dp[sz][target] = dp[sz][target] + mxx_sum(len,sz, target - len[sz-1]); /// take with plus not taking

    return dp[sz][target];

}
int main()
{
    int length, target;
    cin >> length;

    vector<int> len(length);

    for(int i=0; i<length; i++)
        cin >> len[i];

    cin >> target;

    int res = mxx_sum(len,length,target);
    cout<< res <<endl;


    return  0;
}




