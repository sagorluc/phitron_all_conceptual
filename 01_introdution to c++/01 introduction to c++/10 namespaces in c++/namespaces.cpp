#include<bits/stdc++.h>
using namespace std;

namespace one
{
    void fun()
    {
        cout<<"this is namespaces one"<<"\n";
    }
}
namespace tow
{
    void fun()
    {
        cout<<"this is namespaces tow"<<"\n";
    }
}

using namespace one;

int main()
{
    fun();
    tow::fun();

    return 0;
}
