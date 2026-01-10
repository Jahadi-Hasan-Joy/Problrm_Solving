#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin>>n;
    int ans=0;
    while(n/2!=0)
    {
        if(n%2==1)
        {
            ans++;
            
        }
        n/=2;
        
    }
    cout<<ans+1<<endl;
}
       
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}