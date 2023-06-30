#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {5,3,4,2,1};
    int mini = a[0];
    int maxi = a[0];

    for(int i=1; i<=5; i++)
    {
        maxi = max(maxi, a[i]);
        cout<<"index->"<<i<<"->"<<maxi<<"\n";
    }

    cout<<"start minimum \n";

    for(int i=1; i<=5; i++)
    {
        mini = min(mini, a[i]);
        cout<<"index->"<<i<<"->"<<mini<<"\n";

//        if(a[i]<mini)
//        {
//            mini = a[i];
//        }
//
//        if(a[i]>maxi)
//        {
//            maxi = a[i];
//        }
    }
//    cout<<"minimum value of array : "<<mini<<"\n";
//    cout<<"maximum value of array : "<<maxi<<"\n";

    return 0;
}
