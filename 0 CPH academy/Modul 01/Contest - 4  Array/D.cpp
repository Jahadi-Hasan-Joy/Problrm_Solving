#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    int a[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 1; i <= m; i++)
    {
        ll x;
        cin >> x;
        ans += a[x];
    }
    cout << ans << endl;
    return 0;
}