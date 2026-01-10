#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll a,b,ans=0;
    cin>>a>>b;
    ans=a-b;
    if(ans<0)
    {
        cout<<0<<endl;
    }
    else{
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