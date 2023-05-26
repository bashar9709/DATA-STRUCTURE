#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>mp;  //fist data type is key , and second data type is value defien
    mp["goru"] = 1;
    mp["chagol"] = 2;
    mp["vera"] = 3;

    //value of key
    cout<<"value of key\n";
    cout<<mp["goru"]<<"\n";
    cout<<mp["chagol"]<<"\n";
    cout<<mp["vera"]<<"\n";

    mp["cat"] = 2;
    cout<<mp["cat"]<<"\n";

    mp["cat"] =5;
    cout<<mp["cat"]<<"\n";


    //Print the map
    for(auto it:mp)
     {
        cout<<"Key: "<<it.first<<", "<<"Value: "<<it.second<<"\n";
     }

     //also one Map ds 

     map<int,int>mp2;
     mp2[69] = 1;
     mp2[52]= 2;
     mp2[89]=4;
     mp2[1000] = 10;

     for(auto it:mp2)
     {
        cout<<"Key: "<<it.first<<", "<<"Value: "<<it.second<<"\n";
     }

}