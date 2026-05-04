#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n,a,sum=0;
    cin>>n>>a;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x<=a)
        {
            sum+=x;
        }
    }
    cout<<sum<<endl;
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