#include<bits/stdc++.h>
using namespace std;
#define ll long long 


       
int main()
{
    ll t,sum=0,ans=0;
    cin>>t;
    ll a[t*4+1];
    for(ll i=1; i<=t-1; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ans=(((t*(t+1))/2))-sum;
    cout<<ans<<endl;

    return 0;
}