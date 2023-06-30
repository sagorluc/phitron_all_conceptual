#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stk;

    stk.push(10);
    stk.push(5);
    stk.push(20);
    stk.push(27);

//    if(stk.empty() == false)
//        stk.pop(); // delete top value
//
//    if(stk.empty() == false)
//        stk.pop(); // delete top value
//
//    if(stk.empty() == false)
//        stk.pop(); // delete top value
//
//    if(stk.empty() == false)
//        stk.pop(); // delete top value
//
//    if(stk.empty() == false)
//         cout<< stk.top()<<"\n";

    while( stk.empty() == false) // stack er vitor kono value thakle false korbe
    {                            // joto khon stack e value thkbe totokhon porjonto loop cholbe.
        cout<< stk.top() <<" ";
        stk.pop();
    }




    //cout<< stk.empty() << "\n"; // bool type value return.false hoile 0 and true hoile 1 return korbe.

    return 0;
}
