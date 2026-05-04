#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int *p = new int[10]; // dynamically allocate memory for an integer
    for(int i = 0; i < 10; i++)
    {
        p[i] = i + 1; // assign values to the allocated memory
    }

    int *q = new int[20]; // dynamically allocate memory for an integer array of size 20
    for(int i = 0; i < 10; i++)
    {
        q[i] = p[i]; // copy values from p to q
    }
    delete [] p; // free the memory allocated to p
    


    for(int i = 0; i < 10; i++)
    {
        cout << p[i] << " "; // print the values
    }



    return 0;
}