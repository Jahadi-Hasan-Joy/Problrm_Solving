#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{  
    double n;
    double pi=3.141592653589793238462643383279502884197;
    cin>>n;
    cout<<fixed<<setprecision(6)<<(pi*n*n)<<" "<<(2*pi*n)<<endl;
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