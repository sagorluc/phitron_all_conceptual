#include<bits/stdc++.h>
using namespace std;

class node
{
public:

    int value;
    node *left;
    node *right;

    node(int value)
    {
        this->value = value;
        left = NULL;
        right = NULL;

    }

};

class binary_search_tree
{
public:
    node *root;

    binary_search_tree()
    {
        root = NULL;
    }

    void Insert_bst(int value)
    {
        node *newnode = new node(value);

        if(root == NULL)
        {
            root = newnode;
            return;
        }

        // left and right e value insert korbo.

        node *current = root;
        node *previus = NULL;

        while(current != NULL)
        {
            previus = current;

            if( value > current->value)
                current = current->right;
            else
                current = current->left;

        }

        if(value > previus->value)
            previus->right = newnode;
        else
            previus->left = newnode;

    }


    void display_tree()
    {
        if(root == NULL)
        {
            cout<< "Empty\n"<<"\n";
            return;
        }

        queue<node*> q;
        q.push(root);

        while(q.empty() == false)
        {
            node *frontnode = q.front();

            cout<< frontnode->value <<" ";

            if(frontnode->left != NULL)
                q.push(frontnode->left);

            if(frontnode->right != NULL)
                q.push(frontnode->right);

            q.pop();

        }
    }

    bool find_val(int cur_value)
    {
        if(root == NULL)
        {
            cout<<"Empty\n";
            return true;
        }

        node *tmp = root;

        while(tmp != NULL)
        {
            if(cur_value > tmp->value)
                tmp = tmp->right;

            else if(cur_value < tmp->value)
                tmp = tmp->left;

            else
                return true;

        }

        return false;

    }





};
int main()
{
    binary_search_tree b;

    b.Insert_bst(8);
    b.Insert_bst(11);
    b.Insert_bst(6);
    b.Insert_bst(4);
    b.Insert_bst(7);
    b.Insert_bst(9);
    b.Insert_bst(13);

    b.display_tree();

    cout<<"\n";

    if(b.find_val(7) == true)
        cout<< "exist/found\n";
    else
        cout<<"not found\n";



    return 0;
}
