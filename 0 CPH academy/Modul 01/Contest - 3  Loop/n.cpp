#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    ans = (m/100);
    if(m%100!=0)
    {
        ans++;
    }
   ans =(ans-n);
   if(ans<0)
   {
       cout<<0<<endl;
   }
   else
   {
       cout<<ans<<endl;
   }
    
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