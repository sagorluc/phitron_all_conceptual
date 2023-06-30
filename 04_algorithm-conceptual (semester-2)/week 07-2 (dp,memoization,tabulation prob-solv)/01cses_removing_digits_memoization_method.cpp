#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
vector<int> dp(N, INT_MAX);

int solve(int n)
{
    /// base case
    if(n == 0)
        return 0;

    /// check if the result already exists
    if(dp[n] != INT_MAX)
        return dp[n];

    /// calculate the result from the smaller sub-problem
    vector<int> digit;

    for(auto j : to_string(n)) /// digit convert to string
        digit.push_back(j - '0'); /// convert string to digit agein

    for(auto val : digit)
            dp[n] = min(dp[n], solve(n - val) + 1);

    return dp[n];


}
int main()
{
    int n;
    cin >> n;

    int res = solve(n);

    cout<< res <<"\n";

    return 0;
}
