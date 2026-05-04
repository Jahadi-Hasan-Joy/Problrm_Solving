#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int k,g,m;
    cin>>k>>g>>m;
    int x=0,y=0,z;
    while(k--)
    {
        if (x==g)
        {
            x=0;
        }
        else if(y==0)
        {
            y=m;
        }
        else
        {
            z=min(g-x,y);
            x+=z,y-=z;
        }   
    }
    cout<<x<<" "<<y<<endl;
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