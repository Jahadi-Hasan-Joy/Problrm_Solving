#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool isPalindrome(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    string s;
    cin>>s;
    int n=s.length(),ans=1;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            string sub="";
            for(int k=i; k<j; k++)
            {
                sub+=s[k];
            }
            if(isPalindrome(sub))
            {
                ans=max(ans,j-i);
            }
        }
    }
    cout<<ans<<"\n";
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