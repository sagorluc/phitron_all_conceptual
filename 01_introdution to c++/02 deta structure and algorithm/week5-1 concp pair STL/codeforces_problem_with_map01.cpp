#include<bits/stdc++.h>
using namespace std;
/*

problem goal set

    4
    abacaba
    acaba
    abacaba
    acab

    output

    OK
    OK
    abacaba1
    OK

*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // declare map string(key) and int(value)
    map<string, int> mp;

    while(n--)
    {
        string s;
        cin >> s;

        // ek er besi or uniq na hole condition e dhukbe otherwise else
        if(mp[s] >= 1)
        {
            cout<< s << mp[s] << "\n";
        }
        // uniq hole ok print korbe.
        else
        {
            cout<<"OK"<<"\n";
            mp[s]++;
        }
    }

    return 0;
}
