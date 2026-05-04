#include<bits/stdc++.h>
using namespace std;
#define ll long long 
       
int main()
{
    map<pair<string,string>,vector<int>> mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s1,s2;
        int l;
        cin>>s1>>s2>>l;
        for(int j=0;j<l;j++)
        {
            int x;
            cin>>x;
            mp[{s1,s2}].push_back(x);
        }
    } 

    for(auto &it:mp)
    {
        auto &p=it.first;
        cout<<p.first<<" "<<p.second<<endl;
        auto &v=it.second;
        cout<<"size "<<v.size()<<endl;
        for(auto &x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}