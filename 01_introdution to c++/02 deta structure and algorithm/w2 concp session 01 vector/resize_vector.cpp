
//resize()

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
    v.resize(10,6);

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    return 0;
}
