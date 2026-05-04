#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int sum_digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        sum += last_digit;
        n = n / 10;
    }
    return sum;
}

void increment(int &n) //? reference variable
{
    n++;
}

const int nn = 1e5+10;
int arr[nn];

void func()
{
    arr[0] = 10333; //? global variable
    cout<<arr[0]<<endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The sum of a and b is " << sum(a, b) << endl;
    //? 2 ta number er digit er sum function diye sum kora
    cout << "The sum of digits of a and b is " << sum_digit(a) + sum_digit(b) << endl;
    //? increment function
    int n=10;
    increment(n);
    cout<<n<<endl; //? 11 print hobe karon n er value by reference hisabe pathano hoyeche
    //? global variable
    func();
    //! function er moddhe return 0; er pore kichu likle ota run hobe na  
    
    return 0;
}