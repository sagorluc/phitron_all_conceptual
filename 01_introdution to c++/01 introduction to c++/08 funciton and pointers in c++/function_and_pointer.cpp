#include<bits/stdc++.h>
using namespace std;

void print(int *x)
{
    *x = 2050;

}

void print1(int **x)
{
    **x = 2500;

}

int main()
{
    int a = 15;
    int *ptr = &a;
    int **q = &ptr;
    print(ptr);
    print1(q);

    cout<<a<<"\n";
    cout<<**q<<"\n";

    return 0;
}
