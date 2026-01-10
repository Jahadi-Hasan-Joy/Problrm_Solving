#include<bits/stdc++.h>
using namespace std;
#define ll long long 
   
int main()
{
    char c = 'A';
    int n = 5;
for(int i = 0; i < n; i++)
{
    for(int j = 0; j <= i; j++)
    {
        cout << c << " ";
        
    }
    c++;
    cout << endl;
}
    return 0;
}