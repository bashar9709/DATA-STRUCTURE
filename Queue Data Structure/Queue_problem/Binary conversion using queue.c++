#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    queue<string>q;
    q.push("1");
    for(int i=1; i<=n; i++)
    {
        cout<<"Binary representation of "<<i<<": "<<q.front()<<"\n";
        string tem = q.front();
        q.pop();
        q.push(tem + "0");
        q.push(tem + "1");
    }
}