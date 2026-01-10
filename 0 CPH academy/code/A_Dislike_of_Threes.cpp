#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n,ans=0;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=10000;i++)
    {
        if(i%3==0 || i%10==3)
        {
            continue;
        }
        else
        {
            v.push_back(i);
        }
    }
    cout<<v[n-1]<<endl;
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