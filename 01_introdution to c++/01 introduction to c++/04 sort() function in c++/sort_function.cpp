#include<bits/stdc++.h>
using namespace std;
int main()
{
    // STL sort function
    //time complexity O(nlogn)
    int a[5] = {3,1,4,2,5};
    int n=5;
    //sort(a,a+4); //koto indext porjonto sort korbo.
    sort(a,a+n);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
