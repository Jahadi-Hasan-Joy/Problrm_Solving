#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int sum_of_n_digit(int n,int arr[])
{
    if(n==0)
    {
        return arr[0];
    }
    return arr[n] + sum_of_n_digit(n-1,arr);
}

int main()
{
    int n;
    cin >> n;       
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << sum_of_n_digit(n-1,arr) << endl;

    return 0;
}