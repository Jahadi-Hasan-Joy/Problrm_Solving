#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    ll count1 = 0, count2 = 0, max1 = 0, max2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] == '>' && s[i+1] == '<') || 
            (s[i] == '>' && s[i+1] == '*') || 
            (s[i] == '*' && s[i+1] == '<') || 
            (s[i] == '*' && s[i+1] == '*'))
        {
            cout << -1 << '\n';
            return;
        }

        if (s[i] == '<' && s[i+1] == '<')
        {
            count1++;
            max1 = max(max1, count1);
        }
        else if (s[i] == '>' && s[i+1] == '>')
        {
            count2++;
            max2 = max(max2, count2);
        }
        else
        {
            count1 = 0;
            count2 = 0;
        }
    }

    ll left = max1 + 1;
    ll right = max2 + 1;

    if (left > 1 && right > 1)
    {
        cout << -1 << '\n';
        return;
    }

    cout << max(left, right) << '\n';
}
       
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
