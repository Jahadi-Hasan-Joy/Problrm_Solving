#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n, b1 = -1, c = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)  
    {
        int a, b;
        cin >> a >> b;
        if (a <= 10 && b1 < b)
        {
            b1 = b;
            c = i;  
        }
    }
    cout << c << endl;
}

       
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}