#include<bits/stdc++.h>
using namespace std;

class node{
    public:
       int id;
       node* Left;
       node* Right;
       node* parent;
};

class Binary_tree{
     public:
        node* root;

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
        newnode->parent = NULL;
        return newnode;
      }

      void build_binary_tree()
      {
        node* allnode[6];
        for(int i=0; i<6; i++)
           allnode[i] = CreateNewNode(i);

        allnode[0]->Left = allnode[1];
        allnode[0]->Right = allnode[2];

        allnode[1]->Left = allnode[3];
        allnode[1]->Right = allnode[4];
        allnode[1]->parent = allnode[0];

        allnode[2]->Left = allnode[5];
        allnode[2]->parent = allnode[0];

        allnode[3]->parent = allnode[1];
        allnode[4]->parent = allnode[1];
        allnode[5]->parent = allnode[2];

        root = allnode[0];  
      }
      void DFS(node* a)
      {
        if(a==NULL)
          return;
        cout<<a->id<<" ";
        DFS(a->Left);
        DFS(a->Right);  
      }
};
int main()
{
    Binary_tree bt;
    bt.build_binary_tree();
    bt.DFS(bt.root);
}