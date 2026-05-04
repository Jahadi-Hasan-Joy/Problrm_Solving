#include<bits/stdc++.h>
using namespace std;
#define ll long long 
       
int main()
{
    vector<int> v = {1, 2, 3};
    vector<int>::iterator it = v.begin();
    while(it != v.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>>::iterator itp = vp.begin();
    while(itp != vp.end())
    {
        cout << "(" << itp->first << ", " << (*itp).second << ") ";
        itp++;
    }

    return 0;
}