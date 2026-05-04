#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n,p=1,c=0;
    cin>>n;
    vector<ll>v;
    while(n>0)
    {
        if(n%10 != 0)
        {
            v.push_back((n%10)*p);
            
            c++;
        }
        p*=10;
        n/=10;
    }
    cout<<c<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
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