#include<bits/stdc++.h>
using namespace std;
#define ll long long 

//? complexity of selection sort : O(n^2) 

int main()
{
    int n=5;
    int arr[]={64,25,12,22,11}; 
    for(int i=0;i<n-1;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }   
    cout << endl;
    

    return 0;
}