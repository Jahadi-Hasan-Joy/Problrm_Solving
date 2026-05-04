#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n,sum=0,ans=0;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ans = sqrt(sum);
    if((ans*ans) == sum)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
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