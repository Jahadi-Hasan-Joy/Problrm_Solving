#include<bits/stdc++.h>
using namespace std;
#define ll long long 
   
int main()
{
    int n=10;
    int arr[n];     //array of fixed size
    int arr1[]={1,2,3,4,5}; //array of fixed size with initialization
    int arr2[5]={0}; //array of fixed size with initialization to zero

    vector<int> v; //dynamic array (vector) declaration
    vector<int> v1(n); //vector of fixed size n
    vector<int> v2={1,2,3,4,5}; //vector with initialization
    vector<int> v3(5,0); //vector of size 5 with all elements initialized to 0
    
    //Adding elements to vector
    v.push_back(10);    
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //Accessing elements of vector
    cout<<"Elements of vector v: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //Removing last element from vector
    v.pop_back();
    cout<<"Elements of vector v after pop_back: ";
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //Size of vector
    cout<<"Size of vector v: "<<v.size()<<endl;
    
    cout<< "fornt element of vector v: "<<v.front()<<endl;
    cout<< "last element of vector v: "<<v.back()<<endl;
    cout<< "Element at index 1 of vector v: "<<v.at(1)<<endl;
    cout<<"Is vector v empty? "<<(v.empty() ? "Yes" : "No")<<endl;
    cout<<"Capacity of vector v: "<<v.capacity()<<endl;

    return 0;
}