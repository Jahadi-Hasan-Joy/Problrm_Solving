#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> d(n);
    for (auto &&x : d)
    {
        cin >> x;
    }
    ll ans = 0;
    for (ll m = 1; m <= n; m++)
    {
        string month = to_string(m);
        for (ll day = 1; day <= d[m - 1]; day++)
        {
            string s = month + to_string(day);
            if (set<char>(s.begin(), s.end()).size() == 1)
            {
                ans++;
            }
        }
    }
    cout << ans << '\n';
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
