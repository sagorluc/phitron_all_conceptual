#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,c;
        cin >> n >> c;

        unordered_map<int, int> ump;

        for(int i=1; i<=n; i++)
        {
           int p;
           cin >> p;
           ump[p]++;
        }

        int ans = 0;
        for(auto it : ump)
        {
            //cout<<"key : "<<it.first<<" value : "<<it.second<<"\n";

            ans = ans + min(it.second, c);

        }

        cout<<ans<<"\n";
    }


    return 0;
}
