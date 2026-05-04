#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    char a,b,c,d;
    cin>>a>>b>>c>>d;

    ll dist1,dist2;
    dist1=abs(b-a);
    dist2=abs(d-c);
    if(dist1==dist2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
       
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}