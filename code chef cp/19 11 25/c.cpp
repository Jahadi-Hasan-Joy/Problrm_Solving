#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            c1++;
        else if (v[i] == 2)
            c2++;
        else
            c3++;
    }
    int x1,x2,p;
    x1 = c1 + min(1, c2);
    x2 = c3 + min(1, c2);
    p = max(x1, x2);
    cout << n - p << endl;
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
