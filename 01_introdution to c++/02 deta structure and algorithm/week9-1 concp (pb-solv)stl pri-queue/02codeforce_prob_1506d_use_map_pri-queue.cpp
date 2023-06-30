#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        map<int, int> cnt;

        for(int i=1; i<=n; i++)
        {
            int in;
            cin >> in;
            cnt[in]++;
        }

        priority_queue<int> pq;

        for(pair<int, int> p : cnt)
            pq.push(p.second);


        int previus, next, ans = 0;

        while(pq.size() >= 2)
        {
            previus = pq.top();
            pq.pop();

            next = pq.top();
            pq.pop();

            previus--, next--;

            if(previus != 0)
                pq.push(previus);

            if(next != 0)
                pq.push(next);
        }

        while(pq.empty() == false)
        {
            ans = ans + pq.top();
            pq.pop();

        }

        cout<< ans <<"\n";

    }


    return 0;
}
