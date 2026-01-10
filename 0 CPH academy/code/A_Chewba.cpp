#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string z;
    cin >> z;
    for (int i = 0; i < z.length(); i++)
    {
        int a = z[i] - '0';
        if (i == 0 && 9 - a == 0)
            cout << a;
        else
            cout << min(a, 9 - a);
    }
}

int main()
{
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
