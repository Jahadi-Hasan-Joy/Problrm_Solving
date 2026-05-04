#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int count =0;
    for(int i=0; i<7; i++)
    {
        int x;
        cin>>x;
        if(x)
        {
            count++;
        }
    }
    if(count>3)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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