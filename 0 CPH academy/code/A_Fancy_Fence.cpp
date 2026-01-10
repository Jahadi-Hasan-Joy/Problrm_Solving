#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int a;
    cin>>a;
    a=180-a;
    if(360%a==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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