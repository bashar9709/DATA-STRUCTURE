#include<bits/stdc++.h>
using namespace std;

//stack using static array
const int max_size =500;
class stack_p{
    public:
       
      int a[max_size];
      int stack_size;
      stack_p()
      {
        stack_size = 0;
      }
  //Add an element in the stack.O(1)
  void push(int value)
  {
    if(stack_size+1>max_size)
  {
    cout<<"stack is empty!\n";
    return;
  }
  stack_size = stack_size +1;
  a[stack_size-1] =value;
  }    

  //Delete the top element from the stack O (1)
  void pop()
  {
    if(stack_size == 0)
    {
      cout<<"stack is empty!\n";
      return;
    }
    a[stack_size-1]=0;
    stack_size = stack_size -1;
  }

  //Return the top element from the stack O(1)
  int top()
   {
    if(stack_size==0)
   {
    cout<<"stack is empty!\n";
    return -1;
   }
   return a[stack_size-1];
   }


};
int main()
{
 stack_p st;
  st.push(3);
  cout<<st.top()<<"\n";
  st.push(4);
  cout<<st.top()<<"\n";
  st.push(5);
  cout<<st.top()<<"\n";
  st.pop();
  cout<<st.top()<<"\n";
  st.pop();
  cout<<st.top()<<"\n";
  st.pop();
  cout<<st.top()<<"\n";
  st.pop();
  cout<<st.top()<<"\n";
}