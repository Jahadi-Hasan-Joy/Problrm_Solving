#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    vector<int>v2(m);
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((v1[i]+v2[j])<=k)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
       
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}