#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    bool c=true;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]<=s[i+1])
        {
            c=false;
            break;
        }
    }   
    if(c)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
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