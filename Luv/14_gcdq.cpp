#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n,q;
    cin>>n>>q;
    int arr[n+1];
    int forward_gcd[n+1];
    int backward_gcd[n+1];
    forward_gcd[0]=0;
    backward_gcd[n+1]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        forward_gcd[i]=__gcd(forward_gcd[i-1],arr[i]);
    }
    for(int i=n;i>=1;i--)
    {
        backward_gcd[i]=__gcd(backward_gcd[i+1],arr[i]);
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<__gcd(forward_gcd[l-1],backward_gcd[r+1])<<endl;
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