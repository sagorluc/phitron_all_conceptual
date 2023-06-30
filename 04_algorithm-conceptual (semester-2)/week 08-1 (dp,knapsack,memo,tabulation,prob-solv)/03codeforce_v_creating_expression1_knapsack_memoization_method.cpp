
/// problem link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/v
#include<bits/stdc++.h>
using namespace std;

bool targetSum(vector<int>v, int sz, int generate_sum, int target_sum)
{
    /// base case
    if(sz == 0)
    {
        if(generate_sum == target_sum)
            return true;
        else
            return false;
    }


    /// implement choice diagram
    if(generate_sum <= target_sum)
        return targetSum(v, sz-1, generate_sum + v[sz-1], target_sum) or
               targetSum(v, sz-1, generate_sum - v[sz-1], target_sum); /// 1. take 2. not take
    else
        return targetSum(v, sz-1, generate_sum - v[sz-1], target_sum); /// not take






}
int main()
{
    int n, target;
    cin >> n >> target;

    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];

    if(targetSum(v,n,0,target) == true)
        cout<< "YES\n";
    else
        cout<< "NO\n";

    return 0;
}
