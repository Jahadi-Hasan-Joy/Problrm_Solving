#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll k, glass = 0, mag = 0, glass_size, mag_size, temp;
    cin >> k >> glass_size >> mag_size;

    while (k--)
    {
        if (glass == glass_size)
        {
            glass = 0;
        }
        else if (mag == 0)
        {
            mag = mag_size;
        }
        else
        {
            temp = min(glass_size - glass, mag);
            glass += temp;
            mag -= temp;        
        }
    }
    cout << glass << " " << mag << endl;
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