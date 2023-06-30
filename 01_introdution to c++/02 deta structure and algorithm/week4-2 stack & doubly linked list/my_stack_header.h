#include<bits/stdc++.h>
using namespace std;

class node{
public:

    int data;
    node *next;
    node *previus;

};

class STACK{

    node *head;
    node *top;
    int sz;
public:

    // constructor
    STACK()
    {
        head = NULL;
        top = NULL;
        sz = 0;
    }

    void PUSH(int value)
    {
        node *Newnode = new node;

        Newnode->data = value;
        Newnode->next = NULL;
        Newnode->previus = NULL;

        // corner case
        sz++;
        if( head == NULL || top == NULL)
        {
            head = Newnode;
            top = Newnode;
            return;
        }

        top->next = Newnode;
        Newnode->previus = top;
        top = Newnode;
    }

    int TOP()
    {
        return top->data;
    }

    void POP()
    {
        node *delnode = top;

        // corner case
        if( top == head)
        {
            head = NULL;
            top = NULL;
        }
        else
        {
            top = delnode->previus;
            top->next = NULL;
        }
        delete delnode;
        sz--;

    }

    bool EMPTY()
    {
        // corner case
        if( sz == 0)
            return true;
        return false;


    }

    int SIZE()
    {
        return sz;
    }



};


