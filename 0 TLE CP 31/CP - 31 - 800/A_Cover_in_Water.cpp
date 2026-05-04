#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int count=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            count++;
            ans++;
            if(count==3)
            {
                cout<<2<<endl;
                return;
            }
        }
        else
        {
            count=0;
        }
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