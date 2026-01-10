#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll a,b,c, ans;
    double ans2;
    cin>>a>>b>>c;
    ans = a*b;
    ans2 = ((double)c/(double)ans)*100;
    
    if(ans2 > 50.0)
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}