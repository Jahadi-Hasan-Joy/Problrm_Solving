#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = abs(x);
    }
    int ans = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if((a[i]<ans))
        {
            ans=a[i];
        }
    }
    cout<<ans<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}