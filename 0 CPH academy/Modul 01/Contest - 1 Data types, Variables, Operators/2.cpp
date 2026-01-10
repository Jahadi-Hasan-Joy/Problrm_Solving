#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, count = 0;
    cin >> a;
    vector<ll> v;
    while (a > 0)
    {
        v.push_back(a % 2);
        a /= 2;
    }
    reverse(v.begin(), v.end());

    for (auto i : v)
    {
        if (i == 1)
            count = 0;
        else
            count++;
    }
    cout << count << endl;
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