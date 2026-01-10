#include<bits/stdc++.h>
using namespace std;
#define ll long long 
  
int main()
{
    ll num, l,r;
    cin>>num>>l>>r;
    vector<ll> input_;
    vector<ll> ans;
    for(ll i=0;i<num;i++)
    {
        ll x;
        cin>>x;
        input_.push_back(x);
    }
    for(ll i=0;i<num;i++)
    {
        if(input_[i]<=l)
        {
            ans.push_back(l);
        }
        else if(input_[i]>=r)
        {
            ans.push_back(r);
        }
        else
        {
            ans.push_back(input_[i]);
        }
    }
    for(ll i=0;i<num;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}