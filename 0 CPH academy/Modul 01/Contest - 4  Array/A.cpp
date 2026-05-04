#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a;
    cin >> a;
    ll ans = 0;
    for (ll i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
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