#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    s = "Hello ";
    s.push_back(',');
    s.append(" Joy!");
    cout << s << endl; //! not o(1) operation, complexity o(n)
    s.pop_back();
    for (char c : s)
    {
        cout << c << " ";
    }
    cout << endl;
    cout << s.capacity() << endl;    // capacity of string
    cout << s.length() << endl;      // length of string
    cout << s.size() << endl;        // size of string
    s.insert(8, "Md Jahadi Hasan "); // insert at index 6
    cout << s << endl;
    s.erase(5, 5); // erase from index 5, 4 characters
    cout << s << endl;
    s.replace(5, 1, ":");
    cout << s << endl;
    int idx = s.find_first_of('y');
    cout << idx << endl;
    idx = count(s.begin(), s.end(), 'o');
    cout << s.substr(6, 7) << endl;
    cout << idx << endl;
    string name;
    getline(cin, name);
    stringstream ss(name);
    string word;
    while (ss >> word)
    {
        cout << word << " " << endl;
    }

    return 0;
}