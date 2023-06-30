#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node* nxt;

    //constructor
    Node(int value) // constructor diye value add kora holo.
    {
        this->value = value;
        this->nxt = NULL;

    }
};

void InsertAtHead(Node* &head, int value)
{
    Node* NewNode = new Node(value);
    if(head == NULL) // head khali thakle NewHead e connect korbe.
    {
        head = NewNode; //NewHead e connect kora holo.
        return;
    }
    NewNode->nxt = head; // NewHead next head er shathe connect kora holo.
    head = NewNode; // main funciton e head frist thakar karone head ke aber NewHead er shthae connect kora holo.


}
void display(Node* head)
{
    if(head == NULL) // head khali thakle NULL return korbe.
        return;
    while( head != NULL) //head NULL na houya porjonto loop cholbe.
    {
        cout<<head->value<<" "; // print korbe.
        head = head->nxt; // head next head er shatha connect korbe.

    }

}
int main()
{
    Node* head = NULL; //initially head is NULL

//    InsertAtHead(head,10);
//    //cout<<head->value<<" ";
//
//    InsertAtHead(head,20);
//    cout<<head->value<<" "<<head->nxt->value<<" ";

    InsertAtHead(head,10);
    InsertAtHead(head,20);
    InsertAtHead(head,30);
    InsertAtHead(head,40);
    InsertAtHead(head,50);
    InsertAtHead(head,60);

    display(head);

    return 0;
}
