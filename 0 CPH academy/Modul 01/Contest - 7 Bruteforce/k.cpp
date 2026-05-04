#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    if (n % 7 == 0)
        cout << n << endl;
    else
    {
        int p;
        for (int i = 1; i < 10; i++)
        {
            p = n / 10;
            p = (p * 10) + i;
            if (p % 7 == 0)
                break;
        }
        cout << p << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}