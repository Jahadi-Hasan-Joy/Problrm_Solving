#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"YES"<<endl;
    }
    else if((n%=2)==0)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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