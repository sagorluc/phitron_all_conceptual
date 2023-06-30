#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // declare map.first one (key) second one (value).
    map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        int in;
        cin >> in;

        mp[in]++;
    }

    // print map by iterator
//    for(auto it : mp)
//        cout<<it.first<<" "<<it.second<<"\n";

    // pair diyeo print korte pari
    for(pair<int,int> pr : mp)
        cout<<pr.first<<" "<<pr.second<<"\n";


    return 0;
}
