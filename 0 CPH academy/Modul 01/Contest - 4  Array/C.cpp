#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k, temp = 0;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // 1 2 3 4 5
    for (int i = n - k; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n - k; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}