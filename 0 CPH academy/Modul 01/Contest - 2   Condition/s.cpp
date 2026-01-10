#include<bits/stdc++.h>
using namespace std;
#define ll long long 
  
int main()
{
char a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int dis1=abs(b-a);
    if(dis1>2) dis1=5-dis1;

    int dis2=abs(d-c);
    if(dis2>2) dis2=5-dis2;
    
    if(dis1==dis2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}