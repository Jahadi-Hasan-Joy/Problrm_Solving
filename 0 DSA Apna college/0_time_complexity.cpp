#include<bits/stdc++.h>
using namespace std;
#define ll long long 
    //? n>10^8 will give TLE for O(n) or worse time complexity algorithms , only O(1) or O(log n) will work

    //? n<10^8 can work with O(n) or better time complexity algorithms

    //? n<10^6 can work with O(n log n) or better time complexity algorithms

    //? n<10^4 can work with O(n^2) or better time complexity algorithms

    //? n<500 can work with O(n^3) or better time complexity algorithms

    //? n<15 can work with O(2^n) or better time complexity algorithms

    //? n<10 can work with O(n!) or better time complexity algorithms 
    
    // ! example of o(2^n) time complexity
    int fibonnaci(int n) // o(2^n)
    {
        if(n<=1)
            return n;
        return fibonnaci(n-1)+fibonnaci(n-2);
    }

int main()
{

    //! fibonnaci(5); // o(2^n)
    cout<<fibonnaci(5)<<endl;

    //! example of o(1) time complexity
    int n=10;

    cout<<n*2<<endl; // o(1)

    // ! example of o(log n) time complexity
    int x=16;
    while(x>1) // o(log n)
    {
        cout<<x<<" ";
        x=x/2;
    }
    cout<<endl;

    // ! example of o(n) time complexity
    for(int i=0;i<n;i++) // o(n)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // ! example of o(n log n) time complexity
    vector<int> v={5,3,8,6,2};
    sort(v.begin(),v.end()); // o(n log n)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // ! example of o(n^2) time complexity
    for(int i=0;i<n;i++) // o(n^2)
    {
        for(int j=0;j<n;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
    

    
        
    return 0;
}