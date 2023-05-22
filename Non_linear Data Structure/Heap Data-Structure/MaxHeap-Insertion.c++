#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
       public:
           vector<int>nodes;
        MaxHeap()
        {

        }   
      void up_heapify(int idx)
      {
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
      }
      void insert(int x)
      {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
      }
      void printheap()
      {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
      }  
};
int main()
{
    MaxHeap mh;
    mh.insert(4);
    mh.insert(7);
    mh.insert(9);
    mh.insert(11);
    mh.insert(1);
    mh.insert(10);
    mh.printheap();
}