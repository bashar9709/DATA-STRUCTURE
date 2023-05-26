//  10.Given two sets, write a program to find the union of the two sets. You need to use STL Set for this problem.							      10
// Input
// Output
// 5
// 1 2 3 4 5
// 6
// 3 4 5 6 7 9
// 1 2 3 4 5 6 7 9

// The first array is [1,2,3,4,5] and the second array is [3,4,5,6,7,9]. Their union is [1, 2, 3, 4, 5, 6, 7, 9].

// ---------------- Solution -----------------------


 #include <bits/stdc++.h>
 #define nl "\n"

using namespace std;

int main()
{   
    set<int>set1, set2, union_set;
    int n1, n2;

    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        set1.insert(x);
    }

    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        set2.insert(x);
    }


    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(union_set, union_set.begin()));

    for (auto it : union_set)
    {
        cout << it << " ";
    }

}

