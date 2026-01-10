#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<int> v;                    // create an empty vector of integers
    vector<int> v1(10);               //! create a vector of size 10; for fundamental types like int, all values are initialized to 0
    vector<int> v2(10, 5);            //! create a vector of size 10 with all values initialized to 5
    vector<int> v3 = {1, 2, 3, 4, 5}; // create a vector and initialize it with values
    fill(v1.begin(), v1.end(), 0);      // fill the vector with 0
    for (int i : v1) 
    {
        cout << i << " "; // iterate and print elements
    }
    cout << endl;
    //! all type of funcion of vector
    v.push_back(100); // add an element at the end
    v.push_back(200);
    v.push_back(300);
    v.push_back(100);
    v.push_back(400);
    v.push_back(500);
    v.push_back(300);
    v.push_back(100);
    v.push_back(400);
    v.push_back(500);

    cout << v.size() << endl;     // size of vector
    cout << v.capacity() << endl; // capacity of vector
    v.shrink_to_fit();            // reduce capacity to fit size
    cout << v.capacity() << endl; // capacity of vector after shrink_to_fit
    cout << v.front() << endl;    // first element
    cout << v.back() << endl;     // last element
    v.pop_back();                 // remove the last element

    v.erase(v.begin(), v.begin() + 2); // erase elements from index 0 to 1
    v.insert(v.begin() + 2, 150);      // insert 150 at index 1
    // v.clear(); //! remove all elements
    // v.shrink_to_fit(); // reduce capacity to fit size
    // v.resize(5); // resize vector to size 5
    cout << v[0] << endl;        // access element at index 0
    cout << v.at(0) << endl;     // access element at index 0 with bounds checking
    reverse(v.begin(), v.end()); // reverse the vector
    for (int &i : v)
    {
        cout << i << " "; // iterate and print elements
    }
    cout << endl;
    sort(v.begin(), v.end());                 // sort the vector in ascending order
    sort(v.begin(), v.end(), greater<int>()); // sort the vector in descending order
    for (int i : v)
    {
        cout << i << " "; // iterate and print elements
    }
    cout << endl;
    cout << v.empty() << endl; // check if vector is empty
    auto it = find(v.begin(), v.end(), 150);
    cout << it - v.begin() << endl; // find the index of element 300

    sort(v.begin(), v.end());               // sort the vector before using binary_search
    auto last = unique(v.begin(), v.end()); // remove duplicates after sorting
    v.erase(last, v.end());                 // erase the "removed" elements
    for (int i : v)
    {
        cout << i << " "; // iterate and print elements
    }
    cout << endl;
    
    rotate(v.begin(), v.begin() + 3, v.end()); // rotate the vector left by 2 positions
    for (int i : v)
    {
        cout << i << " "; // iterate and print elements
    }
    cout << endl;
    rotate(v.begin(), v.end() - 3, v.end()); // rotate the vector right by 2 positions
    for (int i : v)
    {
        cout << i << " "; // iterate and print elements
    }
    cout << endl;
    auto it2 = min_element(v.begin(), v.end()); // find the minimum element
    cout << *it2 << endl;
    auto it3 = max_element(v.begin(), v.end()); // find the maximum element
    cout << *it3 << endl;
    cout << count(v.begin(), v.end(), 100) << endl; // count occurrences of 100

    int sum = accumulate(v.begin(), v.end(), 0); // sum of all elements
    cout << sum << endl;

    vector<int> v4 = {1,2,3,4,5,3,2,4,5,6,2,1,2,3,4};
    vector<int> freq(10,0); // frequency array to count occurrences of numbers from 0 to 9
    for(int i : v4)
    {
        freq[i]++;
    }
    for(int i=0;i<10;i++)
    {
        if(freq[i]>0)
        {
            cout << i << " occurs " << freq[i] << " times" << endl;
        }
    }
    sort(v4.begin(),v4.end());
    v4.erase(unique(v4.begin(),v4.end()),v4.end()); // remove
    for(int i : v4)
    {
        cout << i << " "<<freq[i]<<endl; // iterate and print elements
    }
    cout << endl;


    return 0;
}