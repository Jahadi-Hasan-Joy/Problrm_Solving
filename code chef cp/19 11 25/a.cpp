#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    ans=(a-b)*c;
    cout<<ans<<endl;
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