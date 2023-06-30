#include<bits/stdc++.h>
using namespace std;
int main()
{
    //memory allocation in c program.
    int *p = (int*)malloc(10*sizeof(int));
    int *q = (int*)calloc(10,sizeof(int));
    for(int i=0; i<10; i++)
    {
       cout<<p[i]<<" ";
    }
    cout<<"\n";

    for(int i=0; i<10; i++)
        cout<<q[i]<<" ";
    free(p);
    free(q);

    // dynamic memory allocation in c++ program
    cout<<"\n";

    int *ptr = new int[10]{2,5,6,8,3}; //initializetion.

    for(int i=0; i<10; i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete ptr;



    return 0;
}
