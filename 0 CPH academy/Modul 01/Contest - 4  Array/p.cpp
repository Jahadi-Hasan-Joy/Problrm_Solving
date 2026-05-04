#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll n;
    cin >> n;
    vector<ll >a(n+1),b(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(ll i=1;i<=n;i++)
    {
        if(b[i]==0)
        {
            b[a[i]]=1;
        }
    }
    vector<ll >ans;
    for(ll i=1;i<=n;i++)
    {
        if(b[i]==0)
        {
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    for(auto x:ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
