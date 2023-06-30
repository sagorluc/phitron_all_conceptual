#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;

    // insert at tail
    l.push_back(10);
    l.push_back(20);

    // insert at head
    l.push_front(15);
    l.push_front(18);
    l.push_front(22);
    l.push_front(24);

//    cout<< l.front()<<" ";
//    cout<< l.back()<<" ";

    l.sort(); // sorted in assending order.

    // using iterator
    for(auto it = l.begin(); it != l.end(); it++)
        cout<< *it <<" ";




    return 0;
}
