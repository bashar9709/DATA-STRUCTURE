#include<bits/stdc++.h>
using namespace std;

//Queue using dynamic circular array 
class Queue
{
   public:
       int *a;
       int array_cap;
       int l,r;
       int sz;
    Queue()
    {
        a = new int[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }
    void remover_circular()
    {
        if(l>r)
        {
            int *tem = new int[array_cap];
            int idx = 0;
            for(int i=l; i<array_cap; i++)
            {
                tem[idx]=a[i];
                idx++;
            }
            for(int i=0; i<=r;i++)
            {
                tem[idx]=a[i];
                idx++;
            }
            swap(tem,a);
            l=0;
            r=array_cap-1;
            delete [] tem;
        } 
    }

    void increase_size()
    {
        remover_circular();
        //size increase
        int *tem = new int[array_cap*2];
        for(int i=0;i<array_cap;i++)
        {
            tem[i] = a[i];
        }
        swap(a,tem);
        array_cap = array_cap*2;
        delete [] tem;
        
    }

    void enqueue(int value)
    {
        if(sz==array_cap)
          increase_size();
        r++;
        if(r==array_cap)
           r=0;
        a[r]= value;
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
        if(l==array_cap)
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