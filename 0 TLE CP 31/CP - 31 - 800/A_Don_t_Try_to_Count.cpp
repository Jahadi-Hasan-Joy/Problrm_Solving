#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    for(int i=0; i<10; i++)
    {
        if(x.find(s)!=string::npos)
        {
            cout<<i<<endl;
            return;
        }
        x+=x;
    }
    cout<<-1<<endl;


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