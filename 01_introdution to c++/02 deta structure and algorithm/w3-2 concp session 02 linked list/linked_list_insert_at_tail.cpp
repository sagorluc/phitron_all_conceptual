#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node* next;

    //constructor
    Node(int value)
    {
        this->value = value;
        this->next = NULL;

    }

};
void InsertAtTail(Node* &head, int value)
{
    Node* NewNode = new Node(value); //NewNode declare kora holo.

    if(head == NULL)
    {
        head = NewNode;
        return;
    }
    Node* tmp; // temponary variable decleare kora holo.
    tmp = head;
    while(tmp->next != NULL) // tmp NULL na houya porjonto loop cholbe
    {
       tmp = tmp->next; // tmp ke update kora holo.
    }
    tmp->next = NewNode; // tmp ke new node e point kora holo.



}


void display(Node* head)
{
    if(head == NULL)
        return;
    while(head != NULL) // head null na houya porjonto loop cholbe.
    {
        cout<<head->value<<" "; // head theke null na houya porjonto value print korbe.
        head = head->next; // head next kore kore update hobe.
    }
}
int main()
{
    Node* head = NULL;

    InsertAtTail(head, 10);
    InsertAtTail(head, 20);
    InsertAtTail(head, 30);
    InsertAtTail(head, 40);
    InsertAtTail(head, 50);
    InsertAtTail(head, 60);

    display(head);

    return 0;
}
