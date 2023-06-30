#include<bits/stdc++.h>
#include "my_stack_header.h"

int main()
{
    STACK stk;

    //cout<< stk.EMPTY() << "\n";
    stk.PUSH(10);
    stk.PUSH(5);
    stk.PUSH(20);
    stk.PUSH(27);

    cout<<"size = "<<stk.SIZE()<<"\n";

    while(stk.EMPTY() == false)
    {
        cout<<stk.TOP()<<" ";
        stk.POP();
    }

    cout<<"\nsize = "<<stk.SIZE()<<"\n";


//    stk.POP();
//    cout<<stk.TOP()<< "\n";
//    cout<<"size = "<<stk.SIZE()<<"\n";
//
//    cout<< stk.EMPTY() << " ";


    return 0;
}
