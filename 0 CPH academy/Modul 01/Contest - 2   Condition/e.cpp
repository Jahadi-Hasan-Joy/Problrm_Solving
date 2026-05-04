#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
   int a,b,c;
    cin>>a>>b;
    if((a!=b) && ((a<b)&&(abs(a-b)<=2)) || ((a>b)&&(abs(a-b)<=3))) 
    
    {
        cout<<"Yes"<<endl;

    }
    
    else{
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