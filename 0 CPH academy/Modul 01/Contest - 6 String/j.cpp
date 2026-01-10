#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s;
    s="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
   
    int a;
    cin>>a;
    for(int i=0;i<a+2;i++)
    {
        cout<<s[i];
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