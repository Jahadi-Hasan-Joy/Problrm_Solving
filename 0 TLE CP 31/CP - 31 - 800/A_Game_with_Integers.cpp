#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin>>n;
    int ans1=0,ans2=0;
    ans1=n+1;
    ans2=n-1;
    if(ans1%3==0 || ans2%3==0)
    {
        cout<<"First\n";
    }
    else
    {
        cout<<"Second\n";
    }
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