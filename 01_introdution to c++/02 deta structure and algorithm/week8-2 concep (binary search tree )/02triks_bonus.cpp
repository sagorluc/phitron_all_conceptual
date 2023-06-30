#include<bits/stdc++.h>
using namespace std;

int a[100];
int main()
{
    //int a[100]; // will gives the garbes value;

    for(int i=0; i<100; i++)
        cout<< a[i] <<" ";

    cout<<"\n\n";

    int n;
    cin >> n;

    cout<< bitset<7>(n);

    return 0;
}
