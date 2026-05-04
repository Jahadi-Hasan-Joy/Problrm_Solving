#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    pair<int, string> p1;
    p1 = {1, "abc"}; // Initialization
    cout << p1.first << " " << p1.second << endl;
    p1 = make_pair(2, "def");
    cout << p1.first << " " << p1.second << endl;
    //! pair just holds two values, if we insert more values it will replace the previous values.

    pair<int, string> p2 = p1; // Copying one pair to another
    cout << p2.first << " " << p2.second << endl;
    pair<int, string> &p3 = p1; // Reference to a pair
    p3.first = 5;               // Modifying through reference
    cout << p1.first << " " << p1.second << endl;

    pair<int, int> array[] = {{1, 2}, {3, 4}, {5, 6}}; // Array of pairs
    cout << "Array of pairs " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << array[i].first << " " << array[i].second << endl;
    }
    swap(array[0], array[2]); // Swapping pairs
    cout << "After swapping " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << array[i].first << " " << array[i].second << endl;
    }

    vector<pair<int, int>> vec; // Vector of pairs
    vec.push_back({1, 2});
    vec.push_back(make_pair(3, 4));
    vec.emplace_back(5, 6); // More efficient way to insert in vector of pairs
    cout << "Vector of pairs " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    cout << endl; 

    pair<int, pair<int, string>> p4; // Nested pairs
    p4 = {1, {2, "nested"}};
    cout << p4.first << " " << p4.second.first << " " << p4.second.second << endl;

    cout<<"Enter two integers:"<<endl;
    pair<int,int>pp;
    cin>>pp.first>>pp.second;
    cout<<pp.first<<" "<<pp.second<<endl;



    return 0;
}