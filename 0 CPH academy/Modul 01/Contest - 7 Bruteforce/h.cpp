#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int  dsum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void solve()
{
    int x,k;
    cin>>x>>k;
    while(dsum(x)%k>0)
    {
        x++;
    }
    cout<<x<<"\n";
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