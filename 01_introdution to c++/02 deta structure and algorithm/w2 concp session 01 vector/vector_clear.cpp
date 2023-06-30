#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    cout<<"\n";

    int sz = v.size();
    cout<<"before clear = "<<sz<<"\n";

    v.clear();
    sz = v.size();
    cout<<"after clear size = "<<sz<<"\n";



    return 0;
}
