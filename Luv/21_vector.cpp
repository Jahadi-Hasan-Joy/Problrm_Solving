#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void printVector( vector<int>& vec) {
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<"size of vector: "<<v.size()<<endl;
    printVector(v);
    v.pop_back();
    cout<<"size of vector after pop: "<<v.size()<<endl;

    vector<int> v2(5, 100); // Vector of size 5, all elements initialized to 100
    printVector(v2);
    vector<int> v3(10); // Vector of size 10, default initialized to 0
    printVector(v3);
    vector<int> v4 = {1, 2, 3, 4, 5}; // List initialization
    vector<int> v5(v4); // Copy constructor
    v5.push_back(6);
    printVector(v5);
    vector<int>v6 = v4; // Copy assignment

    vector<string> vs;
    vs.push_back("hello");
    vs.push_back("world");
    for (string str : vs) {
        cout << str << " ";
    }
    cout << endl;

    
    

    return 0;
}