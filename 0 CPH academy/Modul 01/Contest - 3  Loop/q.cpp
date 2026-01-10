#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int a,b;
    cin>>a>>b;
    int ans=0;
    b++;
    ans = a/b;
    if(ans*b == a)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<a-((b-1)*ans)<<endl;
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