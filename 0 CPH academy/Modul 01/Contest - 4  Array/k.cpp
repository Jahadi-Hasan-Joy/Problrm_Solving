#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    ll t, ans = 0;
    cin >> t;
    ll a[t * 4 + 1];
    int sum = 0;
    for (int i = 1; i <= t * 4 - 1; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int total = 4 * ((t * (t + 1)) / 2);
    ans = total - sum;
    cout << ans << endl;
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}