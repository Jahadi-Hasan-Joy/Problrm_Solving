#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd')
        {
            cout << s[i];
        }
        else
        {
            cout << s[i];

            if (s[i + 1] == 'b' || s[i + 1] == 'c' || s[i + 1] == 'd')
            {
                if(s[i+2]!= 'a' && s[i+2]!='e' )
                {
                    cout << s[i + 1];
                    i++;
                }
            }
            if(i != n-1)
            {
                cout<<'.';
            }
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}