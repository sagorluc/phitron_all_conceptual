#include<bits/stdc++.h>
using namespace std;
/*
chack sum of 3 odd integer and also print the index.
it can be multiply solution .
input

6
3
1 1 1
4
1 1 2 2
3
1 2 3
5
1 4 5 1 2
4
2 6 2 4
5
5 6 3 2 1

output

YES
1 2 3
YES
3 4 1
NO
YES
1 3 4
NO
YES
1 3 5

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
        vector<pair<int, int>> odd, even;

        for(int i=1; i<=n; i++)
        {
            int in;
            cin >> in;

            if(in % 2 == 0)
                even.push_back({in,i});
            else
                odd.push_back({in,i});
        }
        if(odd.size() >= 3) // three odd number sum = odd sum
        {
            cout<<"YES\n";
            cout<<odd[0].second<<" "<<odd[1].second<<" "<<odd[2].second<<"\n";
        }
        else if(odd.size() >= 1 && even.size() >= 2) // one odd and tow even number sum = odd sum
        {
            cout<<"YES\n";
            cout<<odd[0].second<<" "<<even[0].second<<" "<<even[1].second<<"\n";
        }
        else
            cout<<"NO\n";
    }

    return 0;
}
