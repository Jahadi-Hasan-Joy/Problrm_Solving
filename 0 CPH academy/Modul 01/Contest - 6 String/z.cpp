#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    char s[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }

    int freq[26] = {0};
    for (int i = 1; i <= n; i++)
    {
        freq[s[i] - 'A']++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] >= i + 1)
        {
            count++;
        }
    }
    cout << count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
