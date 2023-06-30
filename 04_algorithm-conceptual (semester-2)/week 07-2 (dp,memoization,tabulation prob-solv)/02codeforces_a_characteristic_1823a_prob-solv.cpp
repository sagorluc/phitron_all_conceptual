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

        vector<int> v;

        for(int i=1; i<=n; i++)
            v.push_back(1);

        int positive = n, negative = 0, total = 0;

        for(int i=0; i<n; i++)
        {
            int ans = positive*(positive - 1) / 2;  /// total positive pair
            int ans1 = negative*(negative - 1) / 2; /// total negative pair

            total = (ans + ans1); /// total pair

            if(total == k)
                break;

            v[i] *= -1;
            positive--;
            negative++;

        }

        if(total == k)
        {
            cout<< "YES\n";

            for(int val : v)
                cout<< val <<" ";
            cout<< "\n";
        }
        else
            cout<< "NO\n";

    }

    return 0;
}
