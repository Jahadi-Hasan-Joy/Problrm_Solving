#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            continue;
        }   
        else
        {
            cout<<s[i];
        }
    }   
    cout<<"\n";
   
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