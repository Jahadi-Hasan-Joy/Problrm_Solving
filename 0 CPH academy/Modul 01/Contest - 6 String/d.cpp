#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s;
    cin>>s;
    bool flag=1;
    for(int i=0;i<3;i++)
    {
        if(i==1 && s[i]=='c' && s[0]!='a')
        {
            flag=0;
            break;
        }
        if(i==1 && s[i]=='a' && s[0]!='b')
        {
            flag=0;
            break;
        }
    }
    if(flag)
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