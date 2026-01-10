#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x, ans, y, d;
    cin >> n >> x;
    y = 2 * n - x;
    d = x - y;
    if (d > 0)
    {
        cout << d << endl;
    }
    else
    {
        cout << 0 << endl;
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