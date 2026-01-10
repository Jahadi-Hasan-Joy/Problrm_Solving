#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int odd = 0, even = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if ((i + 1) & 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
    }

    if (odd % 2 == 1 && even % 2 == 0)
    {
        cout << "Ajisai\n";
    }
    else if (even % 2 == 1 && odd % 2 == 0)
    {
        cout << "Mai\n";
    }
    else
    {
        cout << "Tie\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
