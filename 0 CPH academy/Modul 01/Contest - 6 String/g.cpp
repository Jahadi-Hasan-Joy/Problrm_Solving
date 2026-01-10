#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    bool flag=true;
    for(ll i=0;i<n;i++)
    {
        if((i%2!=0 && s[i]!='0'))
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
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