#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << k+1 << "";
        }
        
        for (int j = i; j >0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
       
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}