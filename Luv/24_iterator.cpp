#include<bits/stdc++.h>
using namespace std;
#define ll long long 
       
int main()
{
    vector<int > v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it; // explicit declaration
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for(auto &it : v) // range based for loop using reference
    {
        it++;
        cout << it << " ";
    }
    cout << endl;

    vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};
    // vector<pair<int, int>>::iterator itp; // explicit declaration
    for(auto &itp : vp)
    {
        cout << itp.first << " " << itp.second << endl;
    }
    

    return 0;
}