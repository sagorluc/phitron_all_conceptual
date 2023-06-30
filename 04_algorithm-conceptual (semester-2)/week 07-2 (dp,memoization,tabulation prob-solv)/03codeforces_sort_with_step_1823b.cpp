#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n,k;
        cin >> n >> k;

        map<int, int> pos;

        for(int i=1; i<=n; i++)
        {
            int in;
            cin >> in;
            pos[in] = i;
        }
        int cnt = 0;

        for(pair<int, int> val : pos)
        {
            int currect_pos;
            int current_pos;

            currect_pos = val.first;
            current_pos = val.second;

            if(abs(current_pos - currect_pos) % k != 0)
                cnt++;
        }

        if(cnt == 0)
            cout<< 0 <<"\n";
        else if(cnt == 2)
            cout<< 1 <<"\n";
        else
            cout<< -1 <<"\n";

    }

    return 0;
}
