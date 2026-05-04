#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n,r;
    cin>>n>>r;
    ll u, ans;
    u=(2*n)-r;
    ans= r-u;
    if(ans<0)
    {
        ans=0;
    }
    cout<< ans << endl;
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