#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    bool flag = false;
    ll count = 0;
    vector<string> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if (v[i] == "w" || v[i] == "W")
        {
            count++;
            {
                if (count == 3)
                {
                    flag = true;
                    break;
                }
            }
        }
        else
        {
            count = 0;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}