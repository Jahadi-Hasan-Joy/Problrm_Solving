#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void func(int *arr)
{
    arr[1]=200;
    cout<<arr<<" " <<(arr+1)<<endl;
    cout<<*arr<<" " <<*(arr+1)<<endl;
}

int main()
{
    //? pointer is a variable that stores the address of another variable
    int a = 10;
    int *p = &a; // pointer variable p stores the address of variable a
    cout<<p<<" "<<&a<<endl; // both will print the address of a
    cout<<*p<<" "<<a<<endl; // both will print the value of a

    
    int arr[] = {10, 20, 30, 40, 50};
    func(arr); // passing base address of array to function


    const int aa = 10; // constant value
    const int * const pp = &aa; // constant pointer
    
    int *abc = new int(50); // dynamic memory allocation
    cout<<*abc<<endl;// print the value at the allocated memory position in index 0 
    abc[1] = 100; // modify the value at the allocated memory
    cout<<*abc<<endl;// print the modified value
    delete abc; // free the allocated memory


    return 0;
}