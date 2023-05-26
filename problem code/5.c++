//  Implement queue using a static array that supports enqueue(), dequeue(), and front() operations. Make the array size 100.	
#include <bits/stdc++.h>
using namespace std;
const int Max_size = 100;

class Queue
{
public:
    int a[Max_size];
    int l,r;

    Queue()
    {
        l = 0;
        r = -1;
    }

    void enqueue(int value)
    {
        if(r+1 >= Max_size)
        {
            cout<<"Queue is full\n";
            return;
        }
        r++;
        a[r] = value;
    }

    void dequeue()
    {
        if(l > r)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
    }

    int front()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    //O(1)
    int size()
    {
        return r-l+1;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);

    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();

    return 0;
}


