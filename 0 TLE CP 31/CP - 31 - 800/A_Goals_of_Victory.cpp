#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int a;
    cin>>a;
    a--;
    int sum=0;
    vector<int> v(a);
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum<0)
    {
        cout<<abs(sum)<<endl;
    }
    else
    {
        cout<<-sum<<endl;
    }
    
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