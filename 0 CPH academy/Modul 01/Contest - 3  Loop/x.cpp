#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll a;
    double ans;
    cin>>a;
    ans=((double)a/5);
    ans=ceil(100/ans);
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