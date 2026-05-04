#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int arr[9][9];
    int b[9];
    bool flag = true;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 9; i++)     //? row check
    {
        for (int k = 0; k < 9; k++)
            b[k] = 0;
        for (int j = 0; j < 9; j++)
            b[arr[i][j] - 1]++;
        for (int k = 0; k < 9; k++)
            if (b[k] != 1)
                flag = false;
    }

    for (int j = 0; j < 9; j++)      //? column check
    {
        for (int k = 0; k < 9; k++)
            b[k] = 0;
        for (int i = 0; i < 9; i++)
            b[arr[i][j] - 1]++;
        for (int k = 0; k < 9; k++)
            if (b[k] != 1)
                flag = false;
    }

    for (int i = 0; i < 9; i += 3)  //? 3x3 box check
    {
        for (int j = 0; j < 9; j += 3)
        {
            for (int k = 0; k < 9; k++)
                b[k] = 0;
            for (int ii = 0; ii < 3; ii++)
            {
                for (int jj = 0; jj < 3; jj++)
                {
                    b[arr[i + ii][j + jj] - 1]++;
                }
            }
            for (int k = 0; k < 9; k++)
                if (b[k] != 1)
                    flag = false;
        }
    }

    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
