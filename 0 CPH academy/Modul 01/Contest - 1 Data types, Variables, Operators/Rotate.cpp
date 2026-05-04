#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n;
    cin>>n;
    ll a,b,c,x,y,z,ans;
    a=n%10;
    b=n/10%10;
    c=n/100;
    x=a*100+b*10+c;
    y=b*100+c*10+a;
    z=c*100+a*10+b;
    ans =x+y+z;
    cout<<ans<<endl;
}
       
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}