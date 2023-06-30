#include<bits/stdc++.h>
using namespace std;

/*

problem statment=>

you are given an array of n positive integers. the next line will contain q queries in each.
query you will be given a type 1 and  integer k. if the type is 1 then perfrom lower bound.and
the type is 2 then perfrom upper bound.

-> lower bound = if k is present in array/vector then return.
-> lower bound = if k not present then return immediate gretest value of an array/vector.
-> upper bound = if k is present or not immediate return the gretest k.

-> a[] = 1, 5, 9, 12
-> k = 5;
-> return 5

-> otherwise

-> k = 6
-> 6 is not present in this array
-> return 9.

*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while(q--)
    {
        int type,k;
        cin >> type >> k;

        if(type == 1)
        {
            auto it = lower_bound(v.begin(), v.end(), k);

            if(it != v.end())
            {
                int idx = it - v.begin(), value = *it;
                cout<<"Index : "<< idx+1 <<" Value : "<< value << "\n";
            }
            else
                cout<< -1 <<"\n";
        }
        else
        {
            auto it = upper_bound(v.begin(), v.end(), k);

            if(it != v.end())
            {
                int idx = it - v.begin(), value = *it;
                cout<<"Index : "<< idx+1 <<" Value : "<< value << "\n";
            }
            else
                cout<< -1 <<"\n";
        }


    }




    return 0;
}

