#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;

    //enqueue 
    q.push(10);
    q.push(20);
    q.push(30);
  
    //size
    cout<<"Q size: "<<q.size()<<"\n";
    
    //empty
    cout<<q.empty()<<"\n";

    //front
    cout<<q.front()<<"\n";

    //dequeue
    q.pop();
    cout<<q.front()<<"\n";
    q.pop();
    cout<<q.front()<<"\n";
    q.pop();

    cout<<"Q size: "<<q.size()<<"\n";

    cout<<q.empty()<<"\n";


    queue<char>q2;
     q2.push('b');
     q2.push('a');

     cout<<q2.front();
     q2.pop();
     cout<<q2.front();
     q2.pop();


}