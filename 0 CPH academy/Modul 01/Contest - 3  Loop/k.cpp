#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int k, x, y, g = 0, m = 0, temp;
    cin >> k >> x >> y;
    while (k--)
    {
        if (g == x)
        {
            g = 0;
        }
        else if (m == 0)
        {
            m = y;
        }
        else
        {
            temp = min(x - g, m);
            g += temp;
            m -= temp;
        }
    }
    cout << g << " " << m << endl;
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