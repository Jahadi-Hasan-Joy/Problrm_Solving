#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    int t=n-(a+b);
    if(t+a<b || t+b<a)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
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