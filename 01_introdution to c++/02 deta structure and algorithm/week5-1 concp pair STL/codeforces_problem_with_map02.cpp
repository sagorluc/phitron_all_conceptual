#include<bits/stdc++.h>
using namespace std;
/*
problem goal set

    15 3
    cccaabababaccbc

    output
    cccbbabaccbc

*/
int main()
{
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, vector<int>> idx;

    for(int i=0; i<n; i++)
        idx[s[i]].push_back(i);

    map<int, bool> visited;

    // a to z porjonto loop chalabo.
    for(char ch='a'; ch <= 'z'; ch++)
    {
        // idx vector er value traverse
        for(int i=0; i<idx[ch].size() && k >= 1; i++)
        {
            // ch key er coresponding value gula nite thakvbe.

            int index = idx[ch][i]; // a = i er value
            visited[index] = true; // ekbar visit kore felle seta true.mane remove hoye jabe.
            k--; // and visit korar pore mainus mainus hobe.
        }
    }

    // traverse print
    for(int i=0; i<n; i++)
    {
        if(!visited[i]) // jei index visit kore na setai print hobe.
            cout<< s[i];
    }
    cout<< "\n";


    return 0;
}
