#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin>>n;
    int count=9,ans=0;
    if(n<10)
    {
        cout<<n<<endl;
        return;
    }
    while(n)
    {
        ans+= min(count,n);
        n/=10;
    }
    cout<<ans<<endl;
}
       
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}