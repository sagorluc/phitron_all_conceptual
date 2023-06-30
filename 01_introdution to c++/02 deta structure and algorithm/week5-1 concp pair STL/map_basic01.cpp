#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;

    mp[2] = 5;
    mp[2] = 3;
    mp[1] = 7;
    mp[6] = 9;
    mp[3] = 8;
    mp[7] = 2;
    mp[5] = 10;

    // itarator
    for(auto it : mp)
        cout<<"key "<<it.first<<" "<<"value "<<it.second<<"\n"; // sorted print.

    return 0;
}
