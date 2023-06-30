#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcdefghij";
    cout<<s<<" = "<<s.size()<<"\n";
    s.resize(4);
    cout<<s.length()<<"\n";
    cout<<s<<" = "<<s.size()<<"\n";

    s.clear();
    cout<<s<<" "<<s.size()<<"\n";

    if(s.empty())
        cout<<"yes!empty\n";
    else
        cout<<"no\n";


    return 0;
}
