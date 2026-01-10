#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int a, ans = 0, maxZeros = 0;
    cin >> a;
    vector<int> arr;
    while (a > 0) {
        arr.push_back(a % 2);
        a /= 2;
    }
    reverse(arr.begin(), arr.end());

    for (int bit : arr) {
        if (bit == 0) {
            ans++;
            
        } else {
            ans = 0;
        }
    }
    cout << ans << endl;
}
       
int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
