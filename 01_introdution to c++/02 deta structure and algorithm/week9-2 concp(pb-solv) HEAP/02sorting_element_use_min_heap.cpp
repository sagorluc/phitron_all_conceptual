#include<bits/stdc++.h>
using namespace std;

class Minheap
{
public:
    vector<int> nodes;

    void up_heapify()
    {
        int cur_idx = nodes.size() - 1;
        int parent_idx = (cur_idx - 1)/2;

        while(cur_idx >= 0 && parent_idx >= 0 && nodes[cur_idx] < nodes[parent_idx])
        {
            swap(nodes[cur_idx], nodes[parent_idx]);

            cur_idx = parent_idx;
            parent_idx = (cur_idx - 1)/2;

        }

    }

    void down_heapify(int idx)
    {
        while(1)
        {
            int cur_idx = idx;
            int cur_left = cur_idx * 2 + 1;
            int cur_right = cur_idx * 2 + 2;

            if(cur_left < nodes.size() && nodes[cur_idx] > nodes[cur_left])
                cur_idx = cur_left;

            if(cur_right < nodes.size() && nodes[cur_idx] > nodes[cur_right])
                cur_idx = cur_right;

            if(cur_idx == idx)
                break;

            swap(nodes[cur_idx], nodes[idx]);

            idx = cur_idx;
        }

    }

    void Delete(int idx)
    {
        if(nodes.size() == 0)
        {
            cout<< "node is empty.\n";
            return;
        }

        int lastIndex = nodes.size() - 1;

        swap(nodes[0],nodes[lastIndex]);

        nodes.pop_back();

        down_heapify(0);

    }

    int ExectMin()
    {
        if(nodes.size() == 0)
            return -1;

        int returnNum = nodes[0];
        Delete(0);

        return returnNum;
    }

    void Insertion(int value)
    {
        nodes.push_back(value);
        up_heapify();

    }

    void Display()
    {
        for(auto it : nodes)
            cout<< it <<" ";
        cout<<"\n";
    }

};

vector<int> Sort(vector<int> v)
{
    Minheap mh;

    for(auto it : v)
        mh.Insertion(it);

    vector<int> result;

    for(int i=0; i<v.size(); i++)
        result.push_back(mh.ExectMin());

    return result;



}
int main()
{
//    Minheap mp;
//
//    mp.Insertion(7);
//    mp.Insertion(5);
//    mp.Insertion(9);
//    mp.Insertion(10);
//    mp.Insertion(4);
//    mp.Insertion(3);
//    mp.Insertion(2);
//    mp.Insertion(1);
//    mp.Display();

    int n;
    cin >> n;

    vector<int> a;

    for(int i=0; i<n; i++)
    {
        int in;
        cin >> in;
        a.push_back(in);
    }

    vector<int> ans = Sort(a);

    for(auto it : ans)
        cout<< it <<" ";




    return 0;
}

