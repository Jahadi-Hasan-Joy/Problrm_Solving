#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 
int main()
{
    ll n,ans=0;
    cin>>n;
    vector<ll>a;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a.push_back(x);
    }
    ans = a[0];
    for(ll i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            ans = a[i];
            continue;;
        }
        else{
            
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}