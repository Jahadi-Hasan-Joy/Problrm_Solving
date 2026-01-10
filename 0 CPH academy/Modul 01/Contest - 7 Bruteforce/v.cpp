#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    for(int i = 0; i < 8; i++)
    {
        int sum = 0, ok = 1;
        for(int j = 0; j < s.size(); j++)
        {
            sum += ((i >> (s[j] - 'A')) & 1) ? 1 : -1;
            if(sum < 0)
            {
                ok = 0;
                break;
            }
        }
        if(ok && sum == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}
