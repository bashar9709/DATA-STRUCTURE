// You are given a list of strings. You need to output for each string the previous index where it appeared. If it didn’t occur previously then output -1. Use STL Map for this problem.								   	      10
// Input
// Output
// 10
// apple
// banana
// abcd
// apple
// abcd
// top
// abcd
// abcd
// apple
// banana
// -1
// -1
// -1
// 0
// 2
// -1
// 4
// 6
// 3
// 1

// --------------- Solution ------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{    map<string,int>mp;
    int n;
    cin>>n;
   
   

    for( int i=0; i<n; i++)
    {
        string str;

        cin>>str;

        if(mp.count(str)==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<mp[str]<<endl;
        }

        mp[str]=i;


    }


}

