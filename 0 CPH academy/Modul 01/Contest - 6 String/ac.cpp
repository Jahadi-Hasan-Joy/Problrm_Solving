#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a[26] = {0};

    for (int i = 0; i < n;)
    {
        int j = i;
        while (j < n && s[j] == s[i])
        {
            j++;
        }
        int c = s[i] - 'a';
        a[c] = max(a[c], j - i);
        i = j;
    }

    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        sum += a[i];
    }

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
