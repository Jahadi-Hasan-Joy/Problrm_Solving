#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a;
    cin >> a;
    a %= 100;

    if (a < 10)
    {
        cout << "k0" << a << endl;
    }
    else
    {
        cout << "k" << a << endl;
    }
}

int main()
{
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}