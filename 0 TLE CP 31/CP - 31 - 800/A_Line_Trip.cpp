#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n,d;
    cin>>n>>d;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];  
    }
    int ans=a[0];
    int max_distance=0;
    for(int i=0; i<n-1; i++)
    {
        if(ans<(a[i+1]-a[i]))
        {
            ans=a[i+1]-a[i];
        }
    }
    int t=(d - a[n-1])*2;
    if(ans<t)
    {
        ans=t;
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