// Write a program to sort an array of strings in lexicographic order using the merge sort algorithm.									      10
// Input
// Output
// 5
// yellow apple children zzz chill
// apple children chill yellow zzz
// 4
// date cherry apple banana 
// apple banana cherry date

// --------------------- Solution -----------------------

#include <bits/stdc++.h>
using namespace std;

void merge(string ar[], int p, int q, int r)
{
    int a, b, c;
    int n1 = q - p + 1;
    int n2 = r - q;

    string S [n1], T[n2];

    for ( a= 0; a < n1; a++)
        S[a] = ar[p + a];
    for (b = 0; b < n2; b++)
        T[b] = ar[q + 1+ b];

    a = 0;
    b = 0;
    c = p;
    while (a < n1 && b < n2)
    {
        if (S[a] <= T[b])
        {
            ar[c] = S[a];
            a++;
        }
        else
        {
            ar[c] = T[b];
            b++;
        }
        c++;
    }

    while (a < n1)
    {
        ar[c] = S[a];
        a++;
        c++;
    }

    while (b < n2)
    {
        ar[c] = T[b];
        b++;
        c++;
    }
}

 void merge_Sort(string arr[], int p, int r)
{
    if (p < r)
    {
        int q = p+(r-p)/2;
        merge_Sort(arr, p, q);
        merge_Sort(arr, q+1, r);

        merge(arr, p, q, r);
    }
}


void print_Array(string P[], int size)
{
    for (int i=0; i < size; i++)
        cout << P[i] << " ";
}

int main()
{
    int n;
    cin >> n;

    string ar[n];
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ar[i] = s;
    }

    int arr_size = sizeof(ar)/sizeof(ar[0]);


    merge_Sort(ar, 0, arr_size - 1);

    print_Array(ar, arr_size);

    
}
