#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a.push_back(i);
        }
    }
    int ans;
    for(int i=1;i<=n; i++)
    {
        if(a[i]<=10)
        {
            ans=a[i];
            
        }
        else
        {
            break;
        }
    }
    cout<<ans<<"\n";
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