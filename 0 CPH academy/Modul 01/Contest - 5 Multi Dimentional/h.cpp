#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    char arr[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row = 0, col = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == '*')
            {
                row = i;
                col = j;
            }
        }
    }

    char file = 'a' + col;       
    int rank = 8 - row;          
    cout << file << rank << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
