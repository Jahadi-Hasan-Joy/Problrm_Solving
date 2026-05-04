#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    if (n < 28)
    {
        cout << 'a' << 'a' << char('a' + n - 3) << endl;
    }
    else if(n < 54)
    {
        cout << 'a' << char('a' + n - 28)<<'z' << endl;
    }
    else
    {
        cout << char('a' + n - 53) << 'z' << 'z' << endl;
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