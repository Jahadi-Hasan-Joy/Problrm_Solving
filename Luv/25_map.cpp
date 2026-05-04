#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    map<int, string> m;
    m[1] = "apple";
    m[3] = "cherry";
    m[2] = "banana";
    m.insert({5, "elderberry"});
    //! std::map maintains keys in sorted (ascending) order.
    //! If a key does not exist, using operator[] inserts it with a default value
    //! (0 for integers, empty string for std::string, etc.).
    //! Time complexity:
    //!   - Insertion: O(log n)
    //!   - Deletion:  O(log n)
    //!   - Search:    O(log n)
    //! Traversing the entire map takes O(n).
    //! loop use korle complexity O(n log n) hobe karon each insertion takes O(log n)

    cout << m[4] << endl; //? inserting key 4 with default value ""
    // map<int, string>::iterator it; // explicit declaration
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
    }
    cout << endl;

    map<string, int> m2 = {{"a", 1}, {"b", 2}, {"c", 3}};
    m2["d"];
    for (auto &it : m2)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;

    auto it = m.find(3); // returns iterator to the key 3
    if (it != m.end())
    {
        cout << "Found key 3 with value: " << it->second << endl;
    }
    else
    {
        cout << "Key 3 not found." << endl;
    }
    cout << endl;
    // Erasing a key
    m.erase(2); // removes key 2

    auto it2 = m.find(20);
    if (it2 != m.end())
    {
        m.erase(it2); // removes key 20 if it exists
    }


    map<string , string> m3;
    m3["name"] = "Alice";
    m3["city"] = "Wonderland"; //! inserting of this array will take O (m.size * log n) 
    

    return 0;
}