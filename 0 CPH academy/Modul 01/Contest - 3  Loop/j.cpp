#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k >= n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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