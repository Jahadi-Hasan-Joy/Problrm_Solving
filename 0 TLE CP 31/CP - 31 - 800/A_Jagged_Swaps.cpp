#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool ans=true;
    for(int i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    if(a[0]==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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