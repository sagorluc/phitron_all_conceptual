#include<bits/stdc++.h>
using namespace std;
/*
input
pai er koto gula right number ace.

9
000
3
4141592653
141592653589793238462643383279
31420
31415
314159265358
27182
314159265358979323846264338327

output
0
1
0
0
3
5
12
0
30

*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string PI = "314159265358979323846264338327";
        string s;
        cin >> s;
        int ans = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(PI[i] == s[i])
                ans++;
            else
                break;
        }

        cout<< ans <<"\n";
    }


    return 0;
}
