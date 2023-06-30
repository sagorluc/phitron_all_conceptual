#include<bits/stdc++.h>
using namespace std;
/*

problem goal to set
-> a a d c k l f
-> 0 1 2 3 4 5 6

solve
-> a-> 0 1
-> c-> 3
-> d-> 2
-> f-> 6
-> k-> 4
-> l-> 5

*/
int main()
{
    string s;
    cin >> s;

    map<char, vector<int>> mp;

    // key = char and value = int (vector)
    for(int i=0; i<s.size(); i++)
    {
        mp[ s[i] ].push_back(i);
    }

    // print key and value
    for(auto it : mp)
    {
        char ch = it.first;
        vector<int> v = it.second;

        cout<< ch <<"->";

        // traverse vector.and print
        for(int val : v)
            cout<< val <<" ";
        cout<<"\n";
    }



    return 0;
}
