#include<bits/stdc++.h>
using namespace std;
class node{
     public:
         int id;
         int value;
         node* Left;
         node* Right;
         node* Parent;
};

class BinaryTree{
       public:
            node* root;
       BinaryTree()
       {
        root = NULL;
       }     
       node* CreateNewnode(int id, int value)
       {
          node* newnode = new node;
          newnode->id = id;
          newnode->value = value;
          newnode->Left = NULL;
          newnode->Right = NULL;
          newnode->Parent = NULL;
          return newnode;
       }
       void Insertion(int id, int value)
       {
        node* newnode = CreateNewnode(id,value);
        if(root==NULL)
        {
            root = newnode;
            return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            if(a->Left != NULL)
              q.push(a->Left);
            else{ 
                //Insert in left child of node a
                  a->Left = newnode;
                  newnode->Parent = a;
                  return;
            } 
            if(a->Right != NULL)
              q.push(a->Right);
            else{
                //Insert in Right child of node a
                a->Right = newnode;
                newnode->Parent = a;
                return;
            }  
             

        }
       }
       void BFS()
       {
          if(root==NULL)
          {
            return;
          }
          queue<node*>q;
          q.push(root);
          while(!q.empty())
          {
            node* a = q.front();
            q.pop();
            int l=-1, p=-1, r=-1;
            if(a->Left != NULL)
            {   
                l = a->Left->id;
               q.push(a->Left);

            }   
            if(a->Right != NULL)
            {
                 r = a->Right->id;
                 q.push(a->Right);
            }
            if(a->Parent != NULL)
              p = a->Parent->id;

            cout<<"Node id = "<<a->id<<" Left child = "<<l;
            cout<<"Right child = "<<r<<"parent id = "<<p<<"\n";  

          }
       }

       void search(node* a, int value)
       {
        if(a==NULL)
          return;
         if(a->value == value)
         {
            cout<<a->id<<" ";
         } 
         search(a->Left, value);
         search(a->Right, value);
       }
};
int main()
{
    BinaryTree bt;
     bt.Insertion(0,5);
     bt.Insertion(1,10);
     bt.Insertion(2,10);
     bt.Insertion(3,9);
     bt.Insertion(4,8);
     bt.Insertion(5,5);
     bt.Insertion(6,7);
     bt.BFS();
     cout<<"\n";
     bt.search(bt.root, 5);
     cout<<"\n";
     bt.search(bt.root,10);
}