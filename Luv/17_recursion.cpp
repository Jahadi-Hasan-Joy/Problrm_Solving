#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void func(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    func(n-1);
    cout<<endl;
    cout<<n<<" ";
    
}
ll factorial(ll n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
  
int main()
{
    ll n = 20;
   // func(n);
    cout<<endl;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;

    return 0;
}