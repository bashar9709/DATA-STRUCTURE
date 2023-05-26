#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> mlt;

    //insert O(log n)
    mlt.insert(5);
    mlt.insert(7);
    mlt.insert(4);
    mlt.insert(3);
    mlt.insert(4);
    mlt.insert(7);

    //print O(n)
    cout<<"printing the multiset\n";
    for(auto it:mlt)
    {
      cout<<it<<" ";
    }
    cout<<"\n";

    cout<<"Size of the multiset\n";
    cout<<mlt.size()<<"\n";

    //eraser O(log n)
    //erase all occurrence
    mlt.erase(4);
    cout<<"printing the multiset afet the erase 4\n";
    for(auto it:mlt)
    cout<<it<<" ";
     cout<<"\n";

    //erase a single occurrence
    mlt.erase(mlt.find(7));
    cout<<"Printing the multiset after erasing 7\n";
    for(auto it:mlt)
    cout<<it<<" ";
    cout<<"\n";

    //find O(logn)
    if(mlt.find(5) != mlt.end())
     cout<<"5 Exists\n";
    else
      cout<<"5 doesn't exists\n";  
}   