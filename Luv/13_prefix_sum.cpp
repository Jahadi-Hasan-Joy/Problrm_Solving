#include<bits/stdc++.h>
using namespace std;
#define ll long long 

const int N=1e5+10;;
int prefix_sum[N];
int arr[N];
       
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<prefix_sum[r]-prefix_sum[l-1]<<endl;
    }
    return 0;
}