#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<string> days(n);
    for (int i = 0; i < n; i++)
    {
        cin >> days[i];
    }

    int ans = 0, count = 0;
    for (int i = 0; i < d; i++)
    {
        bool ok = true;
        for (int j = 0; j < n; j++)
        {
            if (days[j][i] == 'x')
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            count++;
            ans = max(ans, count);
        }
        else
        {
            count = 0;
        }
    }
    cout << ans << endl;
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