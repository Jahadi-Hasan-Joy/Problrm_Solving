#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (n < k)
    {
        cout << "NO\n";
        return;
    }

    if ((n & 1) != 0 && (k & 1) == 0)
    {
        cout << "NO\n";
        return;
    }

    if((n & 1) == 0 && (k & 1) != 0 && k*2>n)
    {
        cout << "NO\n";
        return;
    }

    cout<<"YES"<<endl;
    int t = n;
    for(int i=0; i<k-1; i++)
    {
        if(t%2 == k%2)
        {
            n--;
            cout<<"1 ";
        }
        else
        {
            n-=2;
            cout<<"2 ";
        }
    }cout<<n<<endl;

}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}