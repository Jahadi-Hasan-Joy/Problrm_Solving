#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,d,r;
    cin>>a>>b;
    double f;
    d = a/b;
    r = a%b;
    f = double(a)/double(b);
    cout<<d<<" "<<r<<" "<<fixed<<setprecision(10)<<f<<endl;
}