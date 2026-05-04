#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        for (int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        for (int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
