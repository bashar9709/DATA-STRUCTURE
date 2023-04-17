#include<bits/stdc++.h>
using namespace std;
//stack using dynamic array
class stack_dyarr{
    public:
    int *a;
    int stack_size;
    int array_cap;
    stack_dyarr()
    {
        a = new int[1];
        stack_size = 0;
        array_cap = 1;

    }
    //Makes the array capacity multiplied by 2.
    void increase_size()
     {
        int *tem;
        tem = new int[array_cap*2];
        for(int i=0; i<array_cap; i++)
            tem[i]=a[i];
        
         swap(a,tem);
        
         delete []tem;
         array_cap = array_cap*2;
     }

     //Add an element in the stack.O(1)
     void push(int value)
     {
        if(stack_size + 1>array_cap)
           increase_size();
         stack_size = stack_size + 1;
         a[stack_size-1]=value;
     }
     //Delete the topmost element from the stack.O(1)
     void pop()
     {
        if(stack_size==0)
        {
            cout<<"stack is empty!\n";
            return;
        }
        a[stack_size-1]=0;
        stack_size = stack_size -1;
     }

     //Returns the element from the stack.O(1)
     int top()
     {
        if(stack_size==0)
        {
            cout<<"stack is empty!\n";
            return -1;
        }
        return a[stack_size -1];
     }

     

};

int main()
{
    stack_dyarr std;
     
  std.push(3);
  cout<<std.top()<<"\n";
  std.push(4);
  cout<<std.top()<<"\n";
  std.push(5);
  cout<<std.top()<<"\n";
  std.pop();
  cout<<std.top()<<"\n";
  std.pop();
  cout<<std.top()<<"\n";
  std.pop();
  cout<<std.top()<<"\n";
}