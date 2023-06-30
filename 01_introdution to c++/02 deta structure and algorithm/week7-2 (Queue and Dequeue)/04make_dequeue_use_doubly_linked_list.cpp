#include<bits/stdc++.h>
using namespace std;
class node{
public:

    int data;
    node *next;
    node *previus;

    node(int value)
    {
       data = value;
       next = NULL;
       previus = NULL;

    }
};

class Deque{
public:

    node *head;
    node *tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void Push_back(int value)
    {
        node *newnode = new node(value);

        // corner case

        if(sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }

        tail->next = newnode;
        newnode->previus = tail;
        tail = newnode;
        sz++;

    }

    void Push_front(int value)
    {
        node *newnode = new node(value);

        // corner case
        if(sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }

        newnode->next = head;
        head->previus = newnode;
        head = newnode;
        sz++;

    }

    void Pop_back()
    {
        // corner case
        if(sz == 0)
        {
            cout<<"Deque is empty.\n";
            return;
        }

        // corner case
        // sz == 1
        if(head == tail)
        {
            node *tmp = tail;
            head = NULL;
            tail = NULL;
            delete tmp;
            sz--;
            return;
        }

        node *delnode = tail;
        tail = delnode->previus;
        delete delnode;
        tail->next = NULL;
        sz--;

    }

    void Pop_front()
    {
        // corner case
        if(sz == 0)
        {
            cout<<"Deque is empty.\n";
            return;
        }
        // corner case
        // size == 1
        if(head == tail)
        {
            node *tmp = tail;
            head = NULL;
            tail = NULL;
            delete tmp;
            sz--;
        }

        node *delnode = head;

        head = delnode->next;
        delete delnode;
        head->previus = NULL;
        sz--;




    }

    int get_size()
    {
        return sz;
    }

    void Print()
    {
        //corner case
        if(sz == 0)
        {
            cout<<"Duque is empty.\n";
            return;
        }
        node *tmp = head;

        while(tmp != NULL)
        {
            cout<<tmp->data<<" ";
            tmp = tmp->next;

        }
        cout<<"\n";
    }


};
int main()
{
    Deque d;

    d.Push_back(2);
    d.Push_back(4);
    d.Push_front(6);
    d.Push_front(8);

    d.Print();
    cout<<"size : "<< d.get_size()<<"\n";

    d.Pop_back();
    d.Print();
    cout<<"size : "<< d.get_size()<<"\n";

    d.Pop_front();
    d.Print();
    cout<<"size : "<< d.get_size()<<"\n";




    return 0;
}
