#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            continue;
        }
        if (s[i] == '|')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == '.')
                {
                    continue;
                }
                if (s[j] == '*')
                {
                    flag = true;
                    break;
                }
                if (s[j] == '|')
                {
                    flag = false;
                    break;
                }
            }
            break;
        }
    }
    if (flag)
    {
        cout << "in\n";
    }
    else
    {
        cout << "out\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}