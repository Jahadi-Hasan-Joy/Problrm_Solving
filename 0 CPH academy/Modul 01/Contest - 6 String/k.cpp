#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int arr[3] = {0}; 
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        arr[s[i] - 'A']++;
        count++;
        if (arr[0] > 0 && arr[1] > 0 && arr[2] > 0)
            break;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
