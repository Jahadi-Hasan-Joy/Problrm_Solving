#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int a;
    cin>>a;
    vector<int> v;
    for(int i = 1; i<=10000; i++)
    {
        if(i%10==3 || i%3==0)
        {
             continue;
        }
        else
        {
            v.push_back(i);
        }
        
    }
    cout<<v[a-1]<<endl;
    
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