
//empty()

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

//    v.clear();

//    v.empty();

//vector e kono element thkle empty() function 0 return kore.
//vector e kono element na thkle empty() function 1 return kore.

    while(!v.empty())
    {
        cout<<v.back()<<"\n";
        v.pop_back();

    }



    return 0;
}

