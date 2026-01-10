#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n,m;
    cin>>n>>m;
    int count=0;
    for(int i=n;i<=m;i++)
    {
        if(i%10==2 || i%10==3 || i%10==9)
        {
            count++;
        }
    }
    cout<<count<<endl;
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