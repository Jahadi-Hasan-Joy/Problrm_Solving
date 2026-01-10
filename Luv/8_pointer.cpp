#include <bits/stdc++.h>
using namespace std;
#define ll long long

void increment(int *p)
{
    (*p)++;
}

int main()
{
    int a = 10;
    cout << "a "<< a << endl;
    increment(&a);
    cout << "Value of a after increment is : " << a << endl;
    int x = 10;
    int *p = &x;

    cout << "x is : " << x << endl;   //? value of x
    cout << "*p is : " << *p << endl; //? value at address, p er vitore x er address ache and *p means value at address
    cout << "p is : " << p << endl;   //? address of x
    cout << "&x is : " << &x << endl; //? address of x
    cout << "&p is : " << &p << endl; //? address of p

    *p = 20;
    cout << "x after *p = 20 is : " << x << endl; //? x er value change hoye jabe 20 hobe

    p = p + 1;
    cout << "p after p+1 is : " << p << endl; //? address change hoye jabe

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "arr is : " << arr << endl;             //? address of arr[0]
    cout << "&arr is : " << &arr << endl;           //? address of arr[0]
    cout << "&arr[0] is : " << &arr[0] << endl;     //? address of arr[0]
    cout << "*arr is : " << *arr << endl;           //? value at address, arr er vitore arr[0] er address ache and *arr means value at address
    cout << "arr[0] is : " << arr[0] << endl;       //? value at arr[0]
    cout << "*(arr+1) is : " << *(arr + 1) << endl; //? value at arr[1]
    cout << "arr[1] is : " << arr[1] << endl;       //? value at arr[1]
    cout << "2[arr] is : " << 2 [arr] << endl;      //? value at arr[2]

    return 0;
}
