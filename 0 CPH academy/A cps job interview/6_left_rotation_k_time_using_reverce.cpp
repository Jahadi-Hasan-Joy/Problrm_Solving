#include <bits/stdc++.h>
using namespace std;
void reverse(int *a, int i,int j)
{
    while(i<j) {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];


    int k; cin>>k;


    reverse(a,0,k-1);
    reverse(a,k,n-1);
    reverse(a,0,n-1);


    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
