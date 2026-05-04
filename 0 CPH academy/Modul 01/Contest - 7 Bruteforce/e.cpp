#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n;
    cin>>n;
    while(n%3==0)
    {
        n/=3;
    }
    while(n%2==0)
    {
        n/=2;
    }
    if(n==1)
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}