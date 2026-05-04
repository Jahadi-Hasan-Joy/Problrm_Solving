#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, a = 0, t = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
        {
            t++;
        }
        else
        {
            a++;
        }
        if (a >= (n / 2))
        {
            cout << "A\n";
            break;
        }
        if (t >= (n / 2))
        {
            cout << "T\n";
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}