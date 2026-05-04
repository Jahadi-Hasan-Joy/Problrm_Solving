#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    ll ans1=0,ans2=0;
    for(ll i=0;i<n/2;i++)
    {
        ans1+=(s[i]-'0');
    }
    for(ll i=n/2;i<n;i++)
    {
        ans2+=(s[i]-'0');
    }
    if(ans1==ans2)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
       
}
       
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}