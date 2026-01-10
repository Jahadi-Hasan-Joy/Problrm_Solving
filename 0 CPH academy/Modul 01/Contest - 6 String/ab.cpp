#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int a,b;
    cin>>a>>b;
    string s1,s2;
    cin>>s1>>s2;
    bool f1=1,f2=1;
    for(int i=0;i<a;i++)
    {
        if(s1[i]!=s2[i])
        {
            f1=0;
        }
    }
    for(int j=0,i=b-a;i<b;j++,i++)
    {
        if(s1[j]!=s2[i])
        {
            f2=0;
        }
    }
    if(f1==1 && f2==1)
    {
        cout<<0<<endl;
    }
   else if(f1==1 && f2!=1)
   {
       cout<<1<<endl;
   }
   else if(f1!=1 && f2==1)
   {
       cout<<2<<endl;
   }
   else
   {
       cout<<3<<endl;
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