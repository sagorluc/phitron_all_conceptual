#include<bits/stdc++.h>
using namespace std;

class Minheap{
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
int main()
{
    Minheap mp;

    mp.Insertion(7);
    mp.Insertion(5);
    mp.Insertion(9);
    mp.Insertion(10);
    mp.Insertion(4);
    mp.Insertion(3);
    mp.Insertion(2);
    mp.Insertion(1);
    mp.Display();



    return 0;
}
