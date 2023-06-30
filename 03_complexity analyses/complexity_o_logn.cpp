#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;

    // i / 2 time loop cholce.
    for(int i=n; i >= 1; i = i / 2)
        v.push_back(i);

    // i / 2 time value push hoccha
    for(int i=0; i<v.size(); i++)
        cout<< v[i] <<" ";
    return 0;
}
/*

time complexity- O(logn)
scace complexity- O(logn)



*/
