#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a, b;
    cin >> a >> b;
    if((a%3)!=0 && (a+1)==b)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main()
{
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}