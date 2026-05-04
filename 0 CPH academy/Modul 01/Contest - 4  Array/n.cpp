#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n,ans=-1;
    cin>>n;
    vector <ll> a(n+1,0);
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(++a[x]>=3)
        {
            ans=x;
        }
    }
    cout<<ans<<endl;
}
       
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}