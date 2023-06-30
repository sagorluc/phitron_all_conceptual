#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
/// const ll mxN = 2e5;

int main()
{
    ll n,x;
    cin >> n >> x;

    vector<ll> coins(n);

    for(ll i=0; i<n; i++)
        cin >> coins[i];

    vector<ll> num_of_coins(x+1, INT_MAX);

    /// base case
    num_of_coins[0] = 0;

    for(ll i=1; i<=x; i++)
    {
        for(ll j=0; j<coins.size(); j++)
        {
            if(i-coins[j] >= 0)
                num_of_coins[i] = min(num_of_coins[i], num_of_coins[i - coins[j]] + 1);

        }
    }

    cout<< (num_of_coins[x] == INT_MAX ? -1 : num_of_coins[x]) << "\n";

    return 0;
}
