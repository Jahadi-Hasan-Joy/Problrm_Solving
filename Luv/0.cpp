#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int ceil_div(ll a,ll b)
{
    return (a+b-1)/b;
}
int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
void solve()
{
    cout<<"gcd(10,15): "<<__gcd(10,15)<<endl;
    cout<<"lcm(10,15): "<<(10*15)/__gcd(10,15)<<endl;
    int n=3;
    int g=0;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        g=__gcd(g,x);
    }
    cout<<"gcd of n numbers: "<<g<<endl;
    int arr[5]={10 ,2 ,30 ,4 ,50};
    reverse(&arr[0],&arr[5]);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse(arr,arr+5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }  
    cout<<endl;

    sort(arr,arr+5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<*max_element(arr,arr+5)<<endl;
    cout<<*min_element(arr+2,arr+5)<<endl;

    string s="abcdef";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    vector<int> v={10,20,30,40,50};
    reverse(v.begin(),v.end());
    for(auto x:v)
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
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}