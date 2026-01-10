#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;

    x %= 4;

    if (x == 0)
        cout << "North\n";
    else if (x == 1)
        cout << "East\n";
    else if (x == 2)
        cout << "South\n";
    else
        cout << "West\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}
