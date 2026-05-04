#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin >> n;
    int arr[4*n], farr[n+1] = {};
    for(int i = 0; i < 4*n-1; i++)
    {
        cin >> arr[i];
        farr[arr[i]]++;
    }
    for(int i = 1; i <= n; i++)
    {
        if(farr[i] % 4 != 0)
        {
            cout << i << endl;
            return;
        }
    }
}
       
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}