#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==b && b!=c)
    {
        cout<<c<<endl;
        return;
    }
    else if(a==c && c!=b)
    {
        cout<<b<<endl;
        return;
    }
    else if(b==c && c!=a)
    {
        cout<<a<<endl;
        return;
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