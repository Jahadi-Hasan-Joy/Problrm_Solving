#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll ans=(a/b);
    if((a%b)!=0)ans++;
    cout<<ans<<endl;
    
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