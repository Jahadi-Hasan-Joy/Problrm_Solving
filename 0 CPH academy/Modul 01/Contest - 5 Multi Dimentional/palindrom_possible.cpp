#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string str;
    cin >> str;
    int count[26];
    int len=0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i]-'A']++;
        len++;
    }
}

int main()
{
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}