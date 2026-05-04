#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int f[26][26] = {};  

    for(int i = 0; i < n-1; i++)
    {
        int x = s[i] - 'A';
        int y = s[i+1] - 'A';
        f[x][y]++;
    }

    int mx = 0;
    int a = 0, b = 0;
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(f[i][j] > mx)
            {
                mx = f[i][j];
                a = i;
                b = j;
            }
        }
    }

    cout << char(a + 'A') << char(b + 'A') << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    while(t--)
        solve();
    return 0;
}
