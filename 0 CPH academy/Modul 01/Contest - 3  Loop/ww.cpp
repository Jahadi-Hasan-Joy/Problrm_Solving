#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll sum, num;
    cin>> sum >> num;
    if(sum<num)
    {
        cout<<"NO"<<endl;
    }
    if((sum %2)!=0 && (num%2)==0)
    {
        cout<<"NO"<<endl;
    }
    if((sum %2)==0 && (num%2)!=0 && (num*2)>sum)
    {
        cout<<"NO"<<endl;
    }
    cout<<"YES"<<endl;
    for(ll i=0; i<num-1;i++)
    {
        if(sum %2  ==  num %2)
        {
            sum-=1;
            cout<<"1 ";
        }
        else
        {
            sum-=2;
            cout<<"2 ";
        }
    }
    cout<<sum<<endl;
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