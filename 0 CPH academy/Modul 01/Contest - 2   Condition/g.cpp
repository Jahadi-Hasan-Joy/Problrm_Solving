#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll h,w;
    cin>>w>>h;
    if(w>=60 && h<=130)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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