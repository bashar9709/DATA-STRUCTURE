#include<bits/stdc++.h>
using namespace std;
const int Max_size = 500;
class Queue
{
   public:
       int a[Max_size];
       int l , r;

    Queue()
    {
        l=0;
        r=-1;
    }   

    //Insert Element O(1)
    void enqueue(int value)
    {
        if(r+1>=Max_size)
        {
        cout<<"Queue is full\n";
        return;
        }
        r++;
        a[r]=value;
    }

    //Delete Element O(1)
    void dequeue()
    {
       if(l>r)
       {
          cout<<"Queue is empty!\n";
           return;
       }
       l++;
    }
    
    //Print First Element O(1);
    int front()
    {
        if(l>r)
        {
            cout<<"Queue is empty!\n";
            return -1;
        }
        return a[l];
    }

    //get size O(1)
    int size()
    {
       return r-l+1;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout<<"Queue size: "<<q.size()<<"\n";

    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Queue size: "<<q.size()<<"\n";
}