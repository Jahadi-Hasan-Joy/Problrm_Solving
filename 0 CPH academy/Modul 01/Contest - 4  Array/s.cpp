#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {

        for (ll j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                sum += a[j];
            }
        }
        b.push_back(sum);
        sum = 0;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}