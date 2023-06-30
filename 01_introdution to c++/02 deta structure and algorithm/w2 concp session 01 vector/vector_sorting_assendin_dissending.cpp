
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v;

    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }

    //ascending order
    sort(v.begin(),v.end());
    //for h loop.
    for(auto val : v)
          cout<<val<<" ";

    cout<<"\n";

    //descending order
    sort(v.rbegin(),v.rend());
    //for h loop
    for(auto val : v)
        cout<<val<<" ";
}
