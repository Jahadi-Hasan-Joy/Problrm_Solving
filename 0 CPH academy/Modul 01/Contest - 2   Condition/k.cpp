#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int n[3];
    for(int i=0;i<3;i++)
    {
        cin>>n[i];
    }
    sort(n,n+3);
    for(int i=0;i<3;i++)
    {
        cout<<n[i];
        if(i<2)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}