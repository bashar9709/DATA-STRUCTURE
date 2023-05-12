#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
        int value;
        node* Left;
        node* Right;

};
class BST{
     public:
        node* root;
      BST()
      {
        root = NULL;

      } 
      node* CreateNewNode(int value)
      {
        node* newnode = new node;
         newnode->value = value;
         newnode->Left = NULL;
         newnode->Right = NULL;
         return newnode;
      }
      void BFS()
      {
        if(root==NULL)
        {
            return;
        }
        queue<node*> q;
        q.push(root);
        while(!q.empty())
        {
            node* a=q.front();
            q.pop();
            int l=-1, r=-1;
            if(a->Left != NULL)
            {
                l= a->Left->value;
                q.push(a->Left);
            }
            if(a->Right != NULL)
            {
                r=a->Right->value;
                q.push(a->Right);
            }
            cout<<"Node value = "<<a->value<<"Left child = "<<l;
            cout<<"Right child = "<<r<<"\n";
        }
      }
    void Insertion(int value)
    {
        node* newnode = CreateNewNode(value);
        if(root==NULL)
        {
            root= newnode;
            return;
        }
        node* cur=root;
        node* prv = NULL;
    while(cur!= NULL)
   {
      if(newnode->value > cur->value)
      {
        prv = cur;
        cur = cur->Right;
      }
      else{
          prv = cur;
          cur = cur->Left;
      }
   }
    if(newnode->value > prv->value)
    {
        prv->Right = newnode;

    }
    else{
        prv->Left = newnode;
    }
     
    }
};
int main()
{
    BST bst;
    bst.Insertion(6);
    bst.Insertion(4);
    bst.Insertion(3);
    bst.Insertion(5);
    bst.Insertion(7);
    bst.Insertion(8);

    bst.BFS();

}