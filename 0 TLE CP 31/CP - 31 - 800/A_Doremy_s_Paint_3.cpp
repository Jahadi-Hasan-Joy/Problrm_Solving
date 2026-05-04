#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    int max_freq = freq.size();
    if (max_freq > 2)
    {
        cout << "No" << endl;
        return;
    }
    ll freq1 = freq.begin()->second;//first frequency
    ll freq2 = freq.rbegin()->second;//second frequency
    if (freq1 == freq2)
    {
        cout << "Yes" << endl;
    }
    else if (abs(freq1 - freq2) == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
