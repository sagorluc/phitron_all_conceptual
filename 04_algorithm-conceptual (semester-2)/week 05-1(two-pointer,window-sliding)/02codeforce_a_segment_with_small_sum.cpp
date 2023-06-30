#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,s;
    cin >> n >> s;

    vector<ll> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    ll l = 0, r = 0, sum = 0, ans = 0;

    while(r < n)
    {
        sum = sum + v[r];
        if(sum <= s)
        {
            ans = max(r-l+1, ans);
            r++;
        }
        else if(sum > s)
        {
            while(sum > s && l <= r)// until sum less of K and L less or equal R
            {
                sum = sum - v[l];
                l++;
            }
            r++;
        }
    }
    cout<<ans<<"\n";



    return 0;
}
