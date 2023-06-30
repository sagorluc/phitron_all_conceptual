#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int id;
    node *left;
    node *right;
    node *parent;

};

class binaryTree
{

public:

    node *root;

    binaryTree()
    {
        root = NULL;
    }

    node *creatNewNode(int id)
    {
        node *newnode = new node;

        newnode->id = id;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void Insertion(int id)
    {
        node *newnode = creatNewNode(id);

        if(root == NULL)
        {
            root = newnode;
            return;
        }

        queue<node*> q;

        q.push(root);

        while(q.empty() == false)
        {
            node *a = q.front();
            q.pop();

            if(a->left != NULL)
                q.push(a->left);
            else
            {
                a->left = newnode;
                newnode->parent = a;
                return;
            }

            if(a->right != NULL)
                q.push(a->right);
            else
            {
                a->right = newnode;
                newnode->parent = a;
                return;
            }

        }

    }

    void BFS()
    {
        if(root == NULL)
            return;

        queue<node*> q;

        q.push(root);

        while(q.empty() == false)
        {
            node *a = q.front();
            q.pop();

            int p = -1, l = -1, r = -1;

            if(a->left != NULL)
            {
                l = a->left->id;
                q.push(a->left);
            }

            if(a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }

            if(a->parent != NULL)
                p = a->parent->id;

            cout<<"node id-> "<< a->id << " left-chilld-> "<< l;

            cout<<" right-chilld-> "<< r <<" parent-> "<< p <<"\n";



        }
    }



};
int main()
{
    binaryTree b;

    b.Insertion(0);
    b.Insertion(1);
    b.Insertion(2);
    b.Insertion(3);
    b.Insertion(4);
    b.Insertion(5);
    b.Insertion(6);
    b.BFS();


    return 0;
}

