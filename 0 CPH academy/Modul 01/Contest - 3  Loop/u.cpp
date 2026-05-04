#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int plate, unit, ans;
    cin >> plate >> unit;
    ans = plate / unit;
    if (ans >= 20)
    {
        cout << 20 << endl;
    }
    else
    {
        cout << ans << endl;
    }
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