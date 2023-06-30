//push_back
//size()
//pop_back()
//back()
//front()

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v;

    //push_back() diyeo input neoya jabe.
    for(int i=0; i<n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    int lastElement = v.back(); //last elemet ta paoya jabe.
    cout<<"last Elemet is = "<<lastElement<<"\n";

    int fristElement = v.front();//frist element ta paoya jabe.
    cout<<"frist element = "<<fristElement<<"\n";

    v.pop_back(); //last element remove hobe.
    int sz = v.size();
    for(int i=0; i<sz; i++)
    {
        cout<<v[i]<<" ";
    }


    //array type eo input neoya jabe.

//    int n;
//    cin >> n;
//    vector<int>v(n);
//    for(int i=0; i<n; i++)
//        cin >> v[i];
//
//    for(int i=0; i<n; i++)
//        cout<<v[i]<<" ";
//
//    return 0;
}
