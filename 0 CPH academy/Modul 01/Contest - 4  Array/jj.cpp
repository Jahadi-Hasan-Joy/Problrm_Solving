#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> days(n);
    for (int i = 0; i < n; i++)
    {
        cin >> days[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        string Month = to_string(i);
        for (int j = 1; j <= days[i - 1]; j++)
        {
            string date = Month + to_string(j);
            if (set<char>(date.begin(), date.end()).size() == 1)
            {
                ans++;
            }
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