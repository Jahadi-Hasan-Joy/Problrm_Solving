#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s;
    cin>>s;
    for(int i : s)
    {
        int x = i-'0';
        cout<<(x^1);
    }
    cout<<endl;
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