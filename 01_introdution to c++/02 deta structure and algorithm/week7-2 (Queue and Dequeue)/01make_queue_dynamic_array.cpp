#include<bits/stdc++.h>
using namespace std;

class  Queue{
public:

    int *a;
    int start;
    int endd;
    int sz;
    int cur_size;

    Queue(int Size)
    {
        a = new int[Size];
        start = 0;
        endd = -1;
        sz = Size;
        cur_size = 0;

    }

    void Enqueue(int value)
    {
        if(sz == cur_size)
        {
            cout<<"Queue is full\n";
            return;
        }
        endd++;
        endd = endd % sz;
        a[endd] = value;
        cur_size++;
    }

    void Dequeue()
    {
       if(cur_size == 0)
       {
           cout<<"Queue is full\n";
           return;
       }

       start++;
       start = start % sz;
       cur_size--;

    }


    int get_size()
    {
        return cur_size;
    }

    int Front()
    {
        if(cur_size == 0)
            return -1;

        return a[start];
    }





};
int main()
{
    Queue q(5);

    q.Enqueue(5);
    q.Enqueue(10);
    q.Enqueue(12);
    q.Enqueue(15);
    cout<<q.Front()<<"\n";
    q.Dequeue();
    cout<<q.Front()<<"\n";

    cout<<"\n"<< q.get_size()<<"\n";


    return 0;
}
