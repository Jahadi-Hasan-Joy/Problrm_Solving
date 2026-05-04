#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, r, q, pos = 0, temp = -1;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> r >> q;
        if (r <= 10 && q > temp)
        {
            temp = q;
            pos = i;
        }
    }
    cout<<pos<<endl;
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}