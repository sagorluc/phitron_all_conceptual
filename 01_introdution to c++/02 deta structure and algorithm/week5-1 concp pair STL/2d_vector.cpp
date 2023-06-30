#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v(10); // 10 size;
    v[0].push_back(10);
    v[0].push_back(5);
    v[0].push_back(7);

    v[1].push_back(8);
    v[1].push_back(9);

    v[2].push_back(11);
    v[2].push_back(12);

    cout<<v[0][1]; // 0 index er 1 index = 5;


    return 0;
}
