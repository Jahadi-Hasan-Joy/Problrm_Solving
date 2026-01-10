#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans = 0;
    ans=(a/(b*5)+c);
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