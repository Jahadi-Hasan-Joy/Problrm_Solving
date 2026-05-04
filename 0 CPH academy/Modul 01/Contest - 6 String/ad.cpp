#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = s[i] - 'a';
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            arr.erase(arr.begin() + i);
            break;
        }
    }
    if ((int)arr.size() == n)
        arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << (char)(arr[i] + 'a');
    }
    cout << "\n";
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
