#include<bits/stdc++.h>
using namespace std;

/*

-> a[] = 1, 5, 9, 12
-> k = 5;
-> return 5

-> otherwise

-> k = 6
-> 6 is not present in this array
-> return 9.

*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> v(n + 1);

        for(int i=1; i<=n; i++)
            cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        vector<long long> pref(n + 1);

        // prefix sum
        for(int i=1; i<=n; i++)
            pref[i] = (pref[i - 1] + v[i - 1]);

        while(q--)
        {
            int value;
            cin >> value;

            auto it = lower_bound(pref.begin(), pref.end(), value);

            if(it != pref.end())
                cout<< it - pref.begin() <<"\n";
            else
                cout<< -1 << "\n";

        }

    }



    return 0;
}
