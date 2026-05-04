#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s;
    cin>>s;
    for (char &c : s) c = toupper((unsigned char)c);
    if(s!="YES") s="NO";
    else s="YES";   
    cout<<s<<"\n";

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