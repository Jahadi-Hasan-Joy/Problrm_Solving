#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n,k;
    cin>>n>>k;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    int freq[26]={0};
    //odd count
    for(int i=0;i<n;i++)
    {
        freq[arr[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]%2!=0)
        {
            count++;
        }
    }
    if(count<=k || (count-k)==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
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