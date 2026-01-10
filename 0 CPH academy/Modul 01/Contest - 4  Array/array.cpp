#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin >> n;
    int arr[n-1], farr[n+1] = {};
    for(int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
        farr[arr[i]]++;
    }
    for(int i = 1; i <= n; i++)
    {
        if(farr[i] == 0)
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