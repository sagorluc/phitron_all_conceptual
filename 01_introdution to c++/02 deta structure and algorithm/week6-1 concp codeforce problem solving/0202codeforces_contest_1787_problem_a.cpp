#include<bits/stdc++.h>
using namespace std;
/*

this problem have multipule solution.
input
5
3
7
42
31250
20732790

output

-1
-1
21 1
15625 1
10366395 1

*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        if(n % 2 == 0)
            cout<< (n/2) <<" "<< 1 <<"\n";
        else
            cout<<-1<<"\n";

    }

    return 0;
}
