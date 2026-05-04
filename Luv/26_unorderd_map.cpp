#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void printMap(map<int,int> &mp)
{
    for(auto &pr: mp)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<endl;
}
void printMap(unordered_map<int,int> &ump)
{
    for(auto &pr: ump)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<endl;
}


int main()
{
   // ordered map
    map<int,int> mp;
    mp[1]=10;
    mp[3]=30;
    mp[2]=20;
    printMap(mp);
     // unordered_map
    unordered_map<int,int> ump;
    ump[1]=10;
    ump[3]=30;
    ump[2]=20;
    printMap(ump);

    //multi map
    multimap<int, pair<int,int>> mm;
    mm.insert({1, {10,100}});
    mm.insert({1, {20,200}});

    for(auto &pr: mm)
    {
        cout<<pr.first<<" "<<pr.second.first<<" "<<pr.second.second<<endl;
    }

    map<int,vector<int>> mpv;
    mpv[1].push_back(10);
    mpv[1].push_back(20);
    mpv[2].push_back(30);

    for(auto &pr: mpv)
    {
        cout<<pr.first<<" : ";
        for(auto &val: pr.second)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}