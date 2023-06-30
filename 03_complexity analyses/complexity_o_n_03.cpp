#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v;
    // n time loop cholce.
    for(int i=0; i<n; i++)
        v.push_back(i);

    // n time value vactor e push hocca.
    for(int i=0; i<n; i++)
       cout<< v[i] <<" ";


    return 0;
}

/*

time complexity- O(n)
space complexity- O(n)


*/
