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

    ll l = 0, r = 0, sum = 0, ans = n+1;

    while(r < n)
    {
        sum = sum + v[r];

        while(sum - v[l] >= s)
        {
            sum = sum - v[l];
            l++;
        }

        if(sum >= s)
        {
            ans = min(r-l+1, ans);
        }
        r++;

    }

    if(ans > n)
        cout<<-1<<"\n";
    else
        cout<<ans<<"\n";



    return 0;
}

