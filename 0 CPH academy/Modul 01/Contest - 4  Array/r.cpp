#include<bits/stdc++.h>
using namespace std;
#define ll long long 
   
int main()
{
    ll n;
    cin>>n;
    vector<ll> a;
    vector<ll> b;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a.push_back(x);
    }
    b.push_back(a[0]);
    for(ll i=1;i<=n;i++)
    {
        ll x;
        x=a[i]-a[i-1];
        b.push_back(x);
    }
    for(ll i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;


    return 0;
}