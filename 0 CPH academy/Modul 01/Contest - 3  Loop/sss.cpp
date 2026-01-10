#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n;
    cin>>n;
    ll c=0,p=1;
    vector<ll>ans;
    while(n>0)
    {
        if((n%10) !=0)
        {
            ans.push_back(n%10*p);
            c++;
        }
        n/=10;
        p*=10;
    }
    cout<<c<<endl;
    for(auto num : ans)
    {
        cout<<num<<" ";
    }
    cout<<endl;
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