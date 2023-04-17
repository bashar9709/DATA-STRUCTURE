#include<bits/stdc++.h>
using namespace std;
const int Max_size = 500;

class Queue
{
    public:
       int a[Max_size];
       int l, r;
       int sz;
    Queue()
    {
        l=0;
        r=-1;
        sz=0;
    }   
    void enqueue(int value)
    {
        if(sz==Max_size)
        {
            cout<<"Queue is full\n";
            return;
        }
        r++;
        if(r==Max_size)
           r=0;

        a[r]=value;
        sz++;
    }
    void dequeue()
    {
        if(sz==0)
        {
            cout<<"Queue is empty!\n";
            return;
        }
        l++;
        if(l==Max_size)
          l=0;

         sz--; 
    }
    int front()
    {
        if(sz==0)
        {
            cout<<"Queue is empty!\n";
            return -1;
        }
        return a[l];
    }
    int size()
    {
        return sz;
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout<<"Q size: "<<q.size()<<"\n";

    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Q size: "<<q.size()<<"\n";
}