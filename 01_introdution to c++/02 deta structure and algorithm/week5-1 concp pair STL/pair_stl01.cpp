#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    pair<string,int> p;

    p.first = "sagor";
    p.second = 24;

    cout<< p.first <<"\n" << p.second << "\n";

    pair<pair<string,string>, int> pp;

    pp.first.first = "sagor ";
    pp.first.second = "ahmed";
    pp.second = 26;

    cout<< pp.first.first <<"\n" << pp.first.second << "\n" << pp.second <<"\n";

    return 0;
}
