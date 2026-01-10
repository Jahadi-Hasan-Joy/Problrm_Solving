#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<double> v;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back((double)a / b);
    }
    double mx;
    mx = *max_element(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == mx)
        {
            cout << i + 1 << "\n";
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
