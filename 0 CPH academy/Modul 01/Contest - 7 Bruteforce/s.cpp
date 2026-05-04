#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    a[n - 1] = -1;

    for (int last = 0; last <= 100; last++)
    {
        vector<int> b = a;
        b[n - 1] = last;

        int sum = 0;
        int ma = 0;
        int mi = 100;

        for (int p : b)
        {
            sum += p;
            ma = max(ma, p);
            mi = min(mi, p);
        }

        int score = sum - ma - mi;

        if (score >= x)
        {
            cout << last;
            return;
        }
    }

    cout << -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
