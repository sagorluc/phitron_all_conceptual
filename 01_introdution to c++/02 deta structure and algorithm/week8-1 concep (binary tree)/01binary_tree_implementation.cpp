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
    node *allnode[7];

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

    void build_binay_tree()
    {
        for(int i=0; i<7; i++)
            allnode[i] = creatNewNode(i);

        allnode[0]->left = allnode[1];
        allnode[0]->right = allnode[2];

        allnode[1]->parent = allnode[0];
        allnode[2]->parent = allnode[0];

        allnode[1]->left = allnode[5];
        allnode[1]->right = allnode[6];

        allnode[5]->parent = allnode[1];
        allnode[6]->parent = allnode[1];

        allnode[2]->left = allnode[3];
        allnode[2]->right = allnode[4];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];

        root = allnode[0];


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

    b.build_binay_tree();
    b.BFS();


    return 0;
}
