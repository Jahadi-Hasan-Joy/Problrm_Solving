#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n = 10;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < i; x++)
        {
            cout << " ";
        }
        for (int j = n; j > i; j--)
        {
            cout << i+1 << " ";
        }
        cout << endl; 
    }

    return 0;
}