#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solve()
{
    ll ans=0;
    vector <ll> v;

    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(auto i:v)
    {
        ans+=i;
    }

    return ans;
}
       
int main()
{
    ll a;
    cin>>a;
    ll ans;
    
    while(a--)
    {
        ans=solve();
        cout<<ans<<" ";
    }
    cout<<endl;

    return 0;
}

