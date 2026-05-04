#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin>>n;
    int k=1;
    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<< "* ";
        }
        cout<<endl;
        if(i<n) k++;
        else k--;
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