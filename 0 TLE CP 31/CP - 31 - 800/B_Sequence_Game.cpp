#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(i && v.back()>x)
        {
            v.push_back(1);
        }
        v.push_back(x);
    }
    cout<<v.size()<<endl;
    for(int x: v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    

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