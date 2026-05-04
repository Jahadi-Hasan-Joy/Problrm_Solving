#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'F' && s[i + 1] == 'F' || s[i] == 'M' && s[i + 1] == 'M')
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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