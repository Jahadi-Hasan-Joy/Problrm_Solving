#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 10;
ll int arr[N];
void solve()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, d;
        cin >> a >> b >> d;
        arr[a] += d;
        arr[b + 1] -= d;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }
    ll mx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        mx = max(mx, arr[i]);
    }
    cout << mx << endl;
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