#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t, n, x, y, a, b;

void solve()
{
    cin >> n >> y;
    a = b = 0;
    while (n--)
    {
        cin >> x;
        if (x < y)
        {
            a++;
        }
        else if (x > y)
        {
            b++;
        }
    }
    if (a > b)
    {
        cout << y - 1 << '\n';
    }
    else
    {
        cout << y + 1 << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
