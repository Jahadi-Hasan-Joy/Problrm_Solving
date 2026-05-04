#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n1, m1;
    cin >> n1 >> m1;
    int arr[n1][m1];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> arr[i][j];
        }
    }

    int n2, m2;
    cin >> n2 >> m2;
    int brr[n2][m2];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin >> brr[i][j];
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            ll sum = 0;
            for (int k = 0; k < m1; k++)
            {
                sum += arr[i][k] * brr[k][j];
            }
            cout << sum << " ";
        }
        cout << "\n";
    }
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
