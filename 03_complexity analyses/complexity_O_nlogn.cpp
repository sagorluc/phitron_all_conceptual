#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // outer loop time complexity- O(n)
    for(int i=1; i<n; i++)
    {
        // inner loop time complexity - O(logn)
        for(int j = n; j >= 1; j = j / 2)
        {
            cout<<"phitron"<<"\n";
        }
    }

    return 0;
}
/*
O(n) * O(logn) = O(nlogn)

time complexity- O(nlogn)
space compplexity- O(1)

*/
