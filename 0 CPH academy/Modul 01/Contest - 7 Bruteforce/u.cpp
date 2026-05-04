#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll D;
    cin >> D;
    ll ans = D;
    for (ll x = 0; x <= (ll)sqrtl(D) + 9; x++)
    {
        ll z = D - x * x;
        if (z < 0)
        {
            ans = min(ans, -z);
        }
        else
        {
            ll y1 = (ll)sqrtl(z);
            ll y2 = y1 + 1;
            ans = min({ans, z - y1 * y1, y2 * y2 - z});
        }
    }
    cout << ans << "\n";
    return 0;
}
