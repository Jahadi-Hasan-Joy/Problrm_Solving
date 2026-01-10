#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void printMap(map<string,int> &m)
{
    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
       
int main()
{
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    printMap(m);
    
    return 0;
}