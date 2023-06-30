#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v[n+1]; // this code segment mean. every index got one vector.

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            v[i].push_back(j);
        }
    }

    return 0;
}
/*

n = 3;
v[1] = {1,2,3}
v[2] = {1,2,3}
v[3] = {1,2,3}

time complexity- O(n^2)
space complexity- O(n^2)



*/
