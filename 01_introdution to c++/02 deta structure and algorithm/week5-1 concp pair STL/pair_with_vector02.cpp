#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<pair<string,int>> v;

    for(int i=0; i<n; i++)
    {
        string fulname;
        int age;
        cin >> fulname;
        cin >> age;

        v.push_back({fulname,age});
    }

    for(int i=0; i<n; i++)
        cout<<v[i].first << "\n" <<v[i].second << "\n";

    return 0;
}
