#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int binary_to_decimal(int n)
{
    int ans=0;
    int pow=1;

    while(n>0)
    {
        int last_digit=n%10;
        ans+=last_digit*pow;
        pow*=2;
        n=n/10;
    }

    return ans;
}
       
int main()
{
    cout<< binary_to_decimal(1100) <<endl; // Output: 12

    return 0;
}