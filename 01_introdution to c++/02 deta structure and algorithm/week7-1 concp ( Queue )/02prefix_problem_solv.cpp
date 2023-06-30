#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int>v(n + 1);

    for(int i=1; i<=n; i++)
        cin >> v[i];

      vector<int> pref(n+1);

    for(int i=1; i<=n; i++)
        pref[i] = (pref[i-1] + v[i]);

//    for(int i=0; i<=n; i++)
//        cout<<pref[i]<<" ";



    int q;
    cin >> q;

    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout<< pref[r] - pref[l-1]<<" ";

    }



    return 0;
}
