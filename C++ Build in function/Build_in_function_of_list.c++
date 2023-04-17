#include<bits/stdc++.h>
using namespace std;
void print(list<int>l)
{
    //O(n)
    //list<int>::iterator a = l.begin();
    auto a = l.begin();
    while(a!=l.end())
    {
      cout<<*a<<" ";
      a++;
    }
    cout<<"\n";
}

void Insert(list<int>&l, int index, int value)
{
    auto a = l.begin();
    advance(a, index);
    l.insert(a, value);
}

void Delete(list<int>&l, int index)
{
    auto a = l.begin();
    advance(a, index);
    l.erase(a);
}
int main()
{
    list<int> l;

    //push_fornt()_O(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);

    print(l);

    //push_back()_O(1)
    l.push_back(40);
    l.push_back(50);
    print(l);

    //pop_front()_O(1)
    l.pop_front();
    print(l);

    //pop_back()_O(1)
    l.pop_back();
    print(l);

    //Insert At any position
    Insert(l, 1, 100);
    print(l);

    //Delete at any position
    Delete(l, 2);
    print(l);
}