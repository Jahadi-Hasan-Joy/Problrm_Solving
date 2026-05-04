#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n,a,b,c,ans=0;
    cin>>n;
    a = n;
    b = (n%100) * 10 + (n/100);
    c = (b%100) * 10 + (b/100);
    ans = a + b + c;
    cout<<ans<<endl;

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
