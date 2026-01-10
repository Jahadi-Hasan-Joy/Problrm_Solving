#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int decimal_to_binary(int n)
{
    int ans=0;
    int pow=1;

    while(n>0)
    {
        int last_bit=n%2;
        ans+=last_bit*pow;
        pow*=10;
        n=n/2;
    }

    return ans;
}
       
int main()
{
    for(int i=1;i<=16;i++)
    {
        cout<<decimal_to_binary(i)<<endl;
    }

    return 0;
}