#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char a[10][10];
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            cin >> a[i][j];
    int sum = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (a[i][j] == 'X')
                sum += min({i + 1, j + 1, 10 - i, 10 - j});
    cout << sum << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
