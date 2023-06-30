#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // outer loop O(n)
    for(int i=n/2; i<n; i++)
    {
        // inner loop O(logn)
        for(int j=1; j<n; j = j*2)
        {
            cout<<"i = "<< i <<"\n"<<"j = "<< j <<"\n";
        }
        cout<<"\n";
    }

    return 0;
}

/*
time complexity- O(nlogn)
space complexity- O(1)

*/
