#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll x,y,z;
    cin>>x>>y>>z;
    ll ans1,ans2;
    ans1= z*24*60;
    ans2= y*x;
    if(ans1>=ans2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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