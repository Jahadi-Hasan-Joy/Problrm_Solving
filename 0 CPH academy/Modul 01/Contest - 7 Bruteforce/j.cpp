#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int arr[3] = {0};
    for (int i = 0; i < 9; i++)
    {
        char c;
        cin >> c;
        if (c != '?')
        {
            arr[c - 'A']++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] < 3)
        {
            cout << (char)('A' + i) << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}