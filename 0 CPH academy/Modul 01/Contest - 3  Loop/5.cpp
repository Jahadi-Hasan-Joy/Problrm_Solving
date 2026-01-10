#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll t = 1, temp;
    cin >> t;

    ll g, m;
    cin >> g >> m;
    ll glass=0, mag=0;

    while (t--)
    {
        if (glass == g)
        {
            glass = 0;
        }
        else if (mag == 0)
        {
            mag = m;
        }
        else
        {
            temp = min(g - glass, mag);
            glass += temp;
            mag -= temp;
        }
    }
    cout << glass << " " << mag << endl;

    return 0;
}