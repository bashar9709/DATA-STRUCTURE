#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);

    //prit O(n)
    cout<<"Set printing 1\n";
    for(auto i:st)
    {
        cout<<i<<" ";
    }
    cout<<"\n";

    cout<<"Print set 2\n";
    for(auto it = st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";

    //Erase O(log(n))
    st.erase(5);

    cout<<"Printing After earse 5\n";
    for(auto i: st)
      cout<<i<<" ";
     cout<<"\n";

    //find O(log(n))
    if(st.find(7) !=st.end())
     cout<<"7 is found\n";
    else 
        cout<<"7 is not found\n";

    //find 8
    if(st.find(8) != st.end())
      cout<<"8 is found\n";
     else 
     cout<<"8 is not found\n";        
}