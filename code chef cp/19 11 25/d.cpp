#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int minA = INT_MAX, maxA = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < minA) minA = a[i];
        if(a[i] > maxA) maxA = a[i];
    }

    if(maxA <= x || minA >= x)
    {
        cout << "Yes\n";
    }
    else
    {
        if(n == 2) cout << "No\n";
        else cout << "Yes\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
