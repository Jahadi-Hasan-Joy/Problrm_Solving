#include<bits/stdc++.h>
using namespace std;
#define ll long long 

       
int main()
{
    ll ans=0;
    bool flag = false;
    vector <int> a;
    for(int i = 0; i < 8; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(ll i = 1; i < 8; i++)
    {
        if(a[i]<a[i-1])
        {
            flag = true;
            break;
        }
        if((a[i-1]%25) != 0)
        {
            flag = true;
            break;
        }
        if(!((100<=a[i-1])&&(a[i-1]<=675)))
        {
            flag = true;
            break;
        }
    }
    if(flag == false)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}