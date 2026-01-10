#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int x,y;
    cin>>x>>y;
    int arr[x][y],sum[y]={};
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int j = 0; j < y; j++)  
    {
        for (int i = 0; i < x; i++)  
        {
            sum[j] += arr[i][j];
        }
    }

    for (int j = 0; j < y; j++)
    {
        cout << sum[j] << endl;
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