
/// problem link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/w
#include<bits/stdc++.h>
using namespace std;

bool reach_value(long long cur_value, long long target_value)
{
    /// base case
    if(cur_value == target_value)
        return true;
    if(cur_value > target_value)
        return false;

    /// choice diagram
    return reach_value(cur_value * 10, target_value) or
           reach_value(cur_value * 20, target_value);


}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        if(reach_value(1, n) == true) /// initial value 1
            cout<< "YES\n";
        else
            cout<< "NO\n";

    }


    return 0;
}
