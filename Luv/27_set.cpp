#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printSet(set<string> &s)
{
    for (auto &x : s)
    {
        cout << x << endl;
        ;
    }
}

int main()
{
    //! order set ar complexity O(log n) but unordered set ar complexity O(1)
    set<string> s;
    s.insert("apple");
    s.insert("banana");
    s.insert("orange");
    s.insert("apple"); // Duplicate, will not be added
    cout << "Elements in the set: " << endl;
    printSet(s);

    auto it = s.find("banana");
    if (it != s.end())
    {
        cout << "Found: " << *it << endl;
        // s.erase(it); // Erase using iterator
    }
    else
    {
        cout << "Not Found" << endl;
    }
    s.erase("orange");
    cout << "Elements after deletion: " << endl;
    printSet(s);

    //! set
    set<int> s2 = {5, 3, 8, 5}; // Duplicate 5 will not be added
    cout << "Elements in the integer set: " << endl;

    for (auto &x : s2)
    {
        cout << x << endl;
    }

    //! unordered set
    unordered_set<int> us;
    us.insert(5);
    us.insert(3);
    us.insert(8);
    us.insert(5); // Duplicate, will not be added
    cout << "Elements in the unordered set: " << endl;
    for (auto &x : us)
    {
        cout << x << endl;
    }

    //! multiset
    multiset<int> ms;
    ms.insert(5);
    ms.insert(3);
    ms.insert(5);
    ms.insert(3);
    ms.insert(5);
    ms.insert(8);
    //! Duplicate, will be added and stored
    
    cout << "Elements in the multiset: " << endl;
    for (auto &x : ms)
    {
        cout << x << endl;
    }

    auto it2 = ms.find(5);
    if (it2 != ms.end())
    {
        cout << "Found in multiset: " << *it2 << endl;
        ms.erase(it2); // Erase one occurrence using iterator
    }
    cout << "Elements in the multiset after deletion: " << endl;
    for (auto &x : ms)
    {
        cout << x << endl;
    }
    //! but jodi erase funtion use kori tahole sob gula 5 delete hoye jabe
    ms.erase(5);
    cout << "Elements in the multiset after erasing all 5s: " << endl;
    for (auto &x : ms)
    {
        cout << x << endl;
    }

    return 0;
}