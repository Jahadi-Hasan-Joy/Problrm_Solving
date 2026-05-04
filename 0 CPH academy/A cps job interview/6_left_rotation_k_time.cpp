#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    int res[n];
    for (int i = 0; i < n; i++)
    {
        int idx = (i + n - k) % n;
        res[idx] = a[i];
    }
    for (int i = 0; i < n; i++)
        cout << res[i] << " ";
    return 0;
}
