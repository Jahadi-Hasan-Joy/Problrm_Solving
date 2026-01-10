#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n;
    cin >> n;
    vector <ll> a;
    for (ll i = 1; i < 10000; i++)
    {
        if(i % 3 == 0 || i % 10 == 3)
        {
            continue;
        }
        else
        {
            a.push_back(i); 
        }
       
        
    }
    cout << a[n-1] << endl;
}
       
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}