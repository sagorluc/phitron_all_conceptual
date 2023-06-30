//iterator
//begin()
//end()
//rbegin()
//rend()

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

//    vector<int>:: iterator it;
//
//    for(it=v.begin(); it!=v.end(); it++)
//        cout<<*it<<" ";
//
//    cout<<"\n";

    auto it = v.begin();
    for(it=v.begin(); it!=v.end(); it++)
                cout<<*it<<" ";

    cout<<"\n";

    for(auto it=v.begin(); it!=v.end(); it++)
                cout<<*it<<" ";

    cout<<"\n";

    for(auto it=v.rbegin(); it!=v.rend(); it++)
                cout<<*it<<" ";


    cout<<"\n";
    //for h loop

    for(int val : v)
        cout<<val<<" ";




    return 0;
}
