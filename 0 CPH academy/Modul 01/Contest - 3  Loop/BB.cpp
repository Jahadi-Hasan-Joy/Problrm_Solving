#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll sub, highest, avg;
    cin>>sub>>highest>>avg;
    vector<ll> marks;
    
    for(int i = 0; i < sub - 1; i++)
    {
       ll x;
       cin>>x;
       marks.push_back(x);
    }

    ll sum = 0, ans;
    for(auto x: marks)
    {
        sum += x;
    }
    ans = (sub* avg);
    ans -= sum;
    if(ans > highest)
    {
        cout<<-1<<endl;
    }
    else if(ans < highest && ans > 0)
    {
        cout<<ans<<endl;
    }
    else if(ans == highest)
    {
        cout<<highest<<endl;
    }
    else if(ans < 0)
    {
        cout<<0<<endl;
    }
    else if(ans == 0)
    {
        cout<<ans<<endl;
    }

    return 0;
}