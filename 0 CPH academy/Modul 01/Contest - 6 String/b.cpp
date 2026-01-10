#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    ll ans=s[n-1]-'0'+1;
    s[n-1]=char('0' + ans);
    cout<<s<<"\n";
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