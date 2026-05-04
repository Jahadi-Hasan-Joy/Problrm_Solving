#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            count++;
            i += k - 1;
        }
    }
    cout << count << endl;
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