#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    bool ok=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==k)
        {
            ok=1;
        }
    }
    if(ok==1)
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
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}