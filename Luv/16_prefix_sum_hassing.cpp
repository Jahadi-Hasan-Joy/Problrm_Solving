#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 5;
int hash_prefix[N][26];

void solve()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            hash_prefix[i][j] = 0;
        }
    }
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        hash_prefix[i + 1][s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            hash_prefix[j][i] += hash_prefix[j - 1][i];
        }
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int oddcount = 0;
        for (int i = 0; i < 26; i++)
        {
            int aa = (hash_prefix[r][i] - hash_prefix[l - 1][i]);
            if (aa % 2 != 0)
            {
                oddcount++;
            }
        }
        if (oddcount > 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
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