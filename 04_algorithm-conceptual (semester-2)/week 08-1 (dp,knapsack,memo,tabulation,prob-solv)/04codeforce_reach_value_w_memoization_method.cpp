
/// problem link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/w
#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, bool> memo;

bool canReach(long long n)
{
    if (n == 1)
    {
        return true;
    }
    if (memo.count(n))
    {
        return memo[n];
    }
    bool ans = false;
    if (n % 10 == 0)
    {
        ans = canReach(n / 10);
    }
    if (!ans && n % 20 == 0)
    {
        ans = canReach(n / 20);
    }
    memo[n] = ans;
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (canReach(n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        memo.clear();
    }
    return 0;
}


