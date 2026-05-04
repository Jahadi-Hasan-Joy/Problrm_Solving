#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int arr[26]={0};
    for(int i=0;i<n;i++)
    {
        arr[s[i]-'A']++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==1)
        {
            count+=2;
        }
        else if(arr[i]>1)
        {
            count+=arr[i]+1;
        }
    }
    cout<<count<<endl;

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