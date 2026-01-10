#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int a,b;
    cin>>a>>b;
    char arr[a][b];
    int count=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(arr[i][j]=='#')
            {
                count++;
            }
        }
    }
    cout<<count<<endl;

}
       
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}