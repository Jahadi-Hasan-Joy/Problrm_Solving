#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(i&1)
        {
            ans+=3;
        }
        else{
            ans--;
        }
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