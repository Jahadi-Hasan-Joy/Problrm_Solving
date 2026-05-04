#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int arr[26] = {0};
    for (int i = 0; i < n; i++)
        arr[s[i] - 'A']++;

    int odd = 0, odd_idx = -1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2)
        {
            odd++;
            odd_idx = i;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION";
        return;
    }

    string half = "";
    for (int i = 0; i < 26; i++)
    {
        half += string(arr[i] / 2, i + 'A');
    }

    string ans = half;
    if (odd == 1)
        ans += string(arr[odd_idx], odd_idx + 'A');
    reverse(half.begin(), half.end());
    ans += half;

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    while (t--)
        solve();
    return 0;
}
