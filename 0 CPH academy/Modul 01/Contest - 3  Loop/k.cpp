#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int k, x, y, glass = 0, mag = 0, temp;
    cin >> k >> x >> y;
    while (k--)
    {
        if (glass == x)
        {
            glass = 0;
        }
        else if (mag == 0)
        {
            mag  = y;
        }
        else
        {
            temp = min(x - glass, mag);
            glass += temp;
            mag -= temp;
        }
    }
    cout << glass << " " << mag << endl;
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