#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
     int a,b;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
       
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}