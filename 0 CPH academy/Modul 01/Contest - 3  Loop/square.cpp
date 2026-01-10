#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    int flag = 0;
    cout << "Divisors of " << n << " are: " << endl;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                cout << i << " ";
                flag++;
            }
            else
            {
                cout << i << " " << n / i << " ";
                flag += 2;
            }
        }
    }
    cout << "\nTotal number of divisors are: " << flag << endl;
}

int main()
{
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}