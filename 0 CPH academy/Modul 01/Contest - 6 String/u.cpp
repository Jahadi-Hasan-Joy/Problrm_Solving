#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin>>n;
    vector<int> a;
    int c=0,pow=1;
    while(n>0)
    {
        if(n%10!=0)
        {
            a.push_back((n%10)*pow);
            c++;
        }
        
        pow*=10;
        n/=10;
        
    }
    cout<<c<<"\n";
    for(int i : a)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
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