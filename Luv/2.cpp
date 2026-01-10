#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    char c = 'a';
    int a = 10.5; // only the integer part is stored
    float f = 20.506056656;
    double d = 30.50034455554323;
    bool b = true; // except for 0,and false are == 0, other wise all values are true or == 1

    cout << "char c = " << c << endl;
    cout << "int a = " << a << endl;
    cout << "float f = " << fixed << setprecision(6) << f << endl; //! 6 er besi currect ans dite pare na
    cout << "double d = " << d << endl;
    cout << "bool b = " << b << endl;

    cout << (4 * 5) << endl; // 20
    cout << "post :";
    cout << a++ << endl; // will show 10, then a=11
    cout << a << endl;
    cout << "pre : ";
    cout << ++a << endl; // will show 12, a=12, cause it is pre increment
    cout << a-- << endl; // will show 12, then a=11
    cout << a << endl;
    cout << --a << endl; // will show 10, a=10, cause it is pre decrement
    // type conversion char to int

    cout << "ascci value of a = " << (int)c << endl; // 97
    char c1 = 97, c2 = 'd';
    cout << "char value of c1 = " << c1 << endl;              // a
    cout << "char value subtraction = " << (c2 - c1) << endl; // 3 , this are the ascii values of the characters subtracted where c1='a' and c2='d'

    char c3 = '9';
    cout << "char value of c3 = " << c3 << endl;                               // 9 , this is the character 9 not the integer 9
    cout << "char value of c3 after typecasting to int = " << (int)c3 << endl; // 57 , this is the ascii value of the character 9

    // Note that : char only take 1  single at a time.

    // supose we take input 12 in char c4 = 12; then we see
    cout << "Enter a char value: "; // 12
    char c4;
    cin >> c4;                                   // 12
    cout << "char value of c4 = " << c4 << endl; // 1 , this is the first character of the input 12, not the integer 12

    return 0;
}