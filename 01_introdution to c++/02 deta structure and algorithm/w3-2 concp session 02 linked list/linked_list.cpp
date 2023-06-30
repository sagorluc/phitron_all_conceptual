#include<bits/stdc++.h>
using namespace std;
class node{

public:
    int value;
    node* nxt;

public:
    node(int value)
    {
        this->value = value;
        this->nxt = NULL;
    }



};
int main()
{
    node *a = new node(10);
    //cout<<a->value;
    node *b = new node(20);
    node *c = new node(30);


    a->nxt = b;
    b->nxt = c;

    cout<<a->value<<" "<<a->nxt->value<<" "<<a->nxt->nxt->value;
    return 0;
}
