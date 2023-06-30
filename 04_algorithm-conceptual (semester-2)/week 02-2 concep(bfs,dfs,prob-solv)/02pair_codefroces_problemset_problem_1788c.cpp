#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        if(n % 2 == 0)
            cout<<"NO\n";
        else
        {
           cout<<"YES\n";

           int next = 2*n;
           vector<pair<int, int>> ans(n);

           for(int i=0; i<n; i++)
           {
               ans[i].second = next;
               next--;
           }

           next = 1;

           for(int i=0; i<=(n/2); i++)
           {
               ans[i].first = next;
               next += 2;
           }

           next = 2;

           for(int i=(n/2)+1; i < n; i++)
           {
               ans[i].first = next;
               next += 2;
           }

           for(auto val : ans)
            cout<<val.first<<" "<<val.second<<"\n";
        }

    }

    return 0;
}
