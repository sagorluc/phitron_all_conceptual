#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5, a[5] = {2,5,4,3,1};

    //sorting code
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                //swaping code.

                swap(a[i],a[j]);
//
//                temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    return 0;
}


/*

swap kore ekta array k sort korbo

*/
