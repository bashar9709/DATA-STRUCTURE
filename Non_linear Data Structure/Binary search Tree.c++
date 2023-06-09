#include<bits/stdc++.h>
using namespace std;

class node{
   public:
      int id;
      node* Left;
      node* Right;
      node* Parent;
};
 
 //Manually insert nodes is a binary tree and print information of the tree.

class Binary_tree{
      public:
         node* root;
         node* allnode[6];

      Binary_tree()
      {
        root = NULL;
      }   

      node* CreateNewNode(int id)
      {
        node* newnode = new node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->Parent = NULL;
        return newnode;

      }

      void build_binary_tree()
      {
        for(int i=0; i<6; i++)
           allnode[i] = CreateNewNode(i);

         allnode[0]->Left = allnode[1];
         allnode[0]->Right = allnode[2];

         allnode[1]->Left = allnode[5];
         allnode[1]->Parent = allnode[0];

         allnode[2]->Left = allnode[3];
         allnode[2]->Right = allnode[4];
         allnode[2]->Parent = allnode[0];

         allnode[3]->Parent = allnode[2];
         allnode[4]->Parent = allnode[2];
         allnode[5]->Parent = allnode[1];

         root = allnode[0];   
      }

      void print_tree_info()
      {
        for(int i=0; i<6; i++)
        {
          int p = -1, l = -1, r = -1;
          if(allnode[i]->Parent != NULL)
              p = allnode[i]->Parent->id;
          if(allnode[i]->Left != NULL)
              l = allnode[i]->Left->id;
          if(allnode[i]->Right != NULL)
              r = allnode[i]->Right->id;

          cout<<"Node "<<i<<": Parent = "<<p<<", Left child = "<<l<<", Right child = "<<r<<"\n";            
        }
      }
} ; 
int main()
{
  Binary_tree bt;
  bt.build_binary_tree();
  bt.print_tree_info();
  
}