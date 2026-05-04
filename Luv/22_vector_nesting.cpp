#include<bits/stdc++.h>
using namespace std;
#define ll long long 
       
int main()
{
    vector<int> v[3]; // Array of 3 vectors
    for(int i=0;i<3;i++)
    {
        int n;
        cin>>n; // Size of each vector
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x); // Adding elements to each vector
        }
    }   
    // Displaying the vectors
    for(int i=0;i<3;i++)
    {
        cout<<"Vector "<<i+1<<": ";
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    vector<vector<int>> vec; // Vector of vectors
    for(int i=0;i<3;i++)
    {
        int n;
        cin>>n; // Size of each inner vector
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x); // Adding elements to the inner vector
        }
        vec.push_back(temp); // Adding the inner vector to the outer vector
    }  
    // Displaying the vector of vectors
    for(int i=0;i<vec.size();i++)
    {
        cout<<"Inner Vector "<<i+1<<": ";
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}