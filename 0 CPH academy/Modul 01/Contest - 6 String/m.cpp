#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string as;
    cin >> as;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != as[i])
        {
            if (s[i] == '0' && as[i] == 'o' || s[i] == 'o' && as[i] == '0')
            {
                continue;
            }
            else if (s[i] == '1' && as[i] == 'l' || s[i] == 'l' && as[i] == '1')
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
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