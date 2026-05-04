#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a;
    cin >> a;

    vector<int> v;
    int p = 1;
    while (a > 0)
    {

        if (a % 10 > 0)
        {
            v.push_back((a % 10) * p);
        }
        a /= 10;
        p *= 10;
    }

    cout << v.size() << endl;
    for (auto n : v)
    {
        cout << n << " ";
    }
    cout << endl;
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