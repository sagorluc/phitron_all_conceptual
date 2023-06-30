#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<pair<pair<string,string>, int>> v;

    for(int i=0; i<n; i++)
    {
        string fulname, nikename;
        int age;

        cin >> fulname >> nikename;
        cin >> age;

        v.push_back({{fulname,nikename},age});

    }

    for(int i=0; i<n; i++)
        cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<"\n";


    return 0;
}
