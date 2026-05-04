#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n,k;
    cin>>n>>k;
    k++;
    ll ans =0;
    ans =(n/k);
    if(n%k==0)
    {
        cout<<ans<<endl;
    }
    else
    {
        ans += (n - (ans *k));
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