#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll ans = 1, n, pos = 0;
    ll min = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    min = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            pos = i;
        }
    }
    a[pos]++;
    for (ll i = 0; i < n; i++)
    {
        ans *= a[i];
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