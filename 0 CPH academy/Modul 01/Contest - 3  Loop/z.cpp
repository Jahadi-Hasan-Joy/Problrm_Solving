#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a1, a2, a3, b1, b2, b3, alice, bob;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    vector<ll> a = {a1, a2, a3};
    vector<ll> b = {b1, b2, b3};
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    alice = (a[0] * 100) + (a[1] * 10) + a[2];
    bob = (b[0] * 100) + (b[1] * 10) + b[2];

    if (alice > bob)
    {
        cout << "Alice" << endl;
    }
    else if (bob > alice)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Tie" << endl;
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