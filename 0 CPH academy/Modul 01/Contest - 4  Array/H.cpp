#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    a--;
    b--;
    c--;
    d--;
    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }

    for (ll i = 0; i <= b - a; i++)
    {
        swap(arr[a + i] , arr[c + i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}