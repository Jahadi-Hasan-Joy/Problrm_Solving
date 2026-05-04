#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[105][105], ans[105][105];

    // input
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            a[i][j] = s[j] - '0';
            ans[i][j] = a[i][j]; // copy initially
        }
    }

    // top row
    for (int j = 0; j < n - 1; j++)
        ans[0][j + 1] = a[0][j];
    // right col
    for (int i = 0; i < n - 1; i++)
        ans[i + 1][n - 1] = a[i][n - 1];
    // bottom row
    for (int j = n - 1; j > 0; j--)
        ans[n - 1][j - 1] = a[n - 1][j];
    // left col
    for (int i = n - 1; i > 0; i--)
        ans[i - 1][0] = a[i][0];

    // output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << ans[i][j];
        cout << "\n";
    }
}
