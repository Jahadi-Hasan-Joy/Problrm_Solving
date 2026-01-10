#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, d, pos = 0, ans = 0;
    vector<ll> a;
    bool flag = false;
    cin >> n >> d;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        a.push_back(temp);
    }
    for (ll i = 1; i < n; i++)
    {
        ans = a[i] - a[i - 1];
        if (ans <= d)
        {
            pos = a[i];
            flag = true;
            break;
        }
        else
        {
            continue;
        }
    }

    if (flag)
    {
        cout << pos << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}