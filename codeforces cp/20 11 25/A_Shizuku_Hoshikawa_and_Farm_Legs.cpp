 #include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a;
    cin >> a;
     if(a % 2 == 1)
    {
        cout << 0 << endl;
        return;
    }
    cout << a/4 + 1 << endl;
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