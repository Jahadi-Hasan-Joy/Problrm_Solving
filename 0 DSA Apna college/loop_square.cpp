#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int row = 4;
    int col = 5;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(j == 0 || j == col-1 || i == 0 || i == row-1)
            {
                cout<<"#";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<endl;
    }
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