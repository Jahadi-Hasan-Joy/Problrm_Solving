#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(arr[i][j]==0)
            {
                cout<<".";
            }
            else
            {
                cout<<char(arr[i][j]+64);
            }
        }
        cout<<"\n";
    }
}
       
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}