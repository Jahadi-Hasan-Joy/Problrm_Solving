#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    stack<int>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        s.push(x);
    }
    
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}