#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(const vector<ll> &store, vector<ll> &ans)
{
    ll len = store.size();
    for (ll i = 0; i < len - 1; i++)
    {
        ll x = store[i];
        ll y = store[i + 1];

        ans.push_back(x);

        if (x < y)
        {
            while (x + 1 < y)
            {
                ans.push_back(++x);
            }
        }
        if (x > y) 
        {
            while (x - 1 > y)
            {
                ans.push_back(--x);
            }
        }
    }
    ans.push_back(store[len - 1]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll num;
    cin >> num;
    vector<ll> store;
    for (ll i = 0; i < num; i++)
    {
        ll x;
        cin >> x;
        store.push_back(x);
    }

    vector<ll> ans;
    solve(store, ans);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
