#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    //?  comment er color use korar jonno first e //!  and //* use kore hoise 


    //! calculation alway perform in higher data type
    cout << 7 / 2 << endl;   // 3
    cout << 7.0 / 2 << endl; // 3.5
    cout << 'c' + 1 << endl; // 100 , c=99 in ascii table

    int a = 3 / 2.0;                           // 1.5 hobe but store hobe 1 , cause a is int type
    cout << "a is = " << a << endl;            // 1
    double b = 5 / 2;                          // 2 hobe, both int type so integer division hobe
    cout << "b is = " << b << endl;            // 2
    cout << "in double = " << 3 / 2.0 << endl; // 1.5

    //! operator precedence
    //* left to right associativity,

    //? jodi same power er  2,3 ta operator aki line e thake tahole jeta left e thake seta first calculate hobe then right er ta kaj hobe
    //!               () , [] , -> ,  . , ++ -- , unary + - , ! ~ , * & sizeof
    //*               /, %,*
    //!               + -
    //*               << >> , < <= > >= , == != , && , || , = += -= *= /= %= &= |= ^= <<= >>=
    //!               , & , ^ , | , && , ||

    cout << (3 + 4 * 5) << endl; // 23,  akhane age gun hobe then jog
    cout << (3 * 4 / 2) << endl; // 6, akhane gun hobe then vag , casue left  er operator er priority beshi

    //* overflow , range of data type
    //!         -10^9 to 10^9 // int range
    //!         -10^12 to 10^12 // long  range   (use korar donkar nai)
    //!         -10^18 to 10^18 // long long range

      

    int x = 100000;
    int y = 100000;
    int z = x * y;                   // overflow error
    cout << " z is = " << z << endl; // 10000000000 houwar kotha but overflow hoye gese and garbage value dekhabe
    int aa = 100000;
    int bb = 100000;
    long long int cc = aa * bb; //  overflow error, cause akhono int ai calculate hobe and wrong asbe
    cout << "cc is = " << cc << endl;
    //* solution for overflow error

    cc = aa * 1LL * bb;               // 1LL means long long er sathe multiply hobe, so overflow hobe na
    cout << "After over flow cc is = " << cc << endl; // 10000000000

    double dd = 100000;
    double ee = 100000;
    double ff = dd * ee;
    cout << "ff is = " << fixed << setprecision(2) << ff << endl; // 10000000000.00 hobe, akhane double er sathe double hobe so overflow hobe na

    //* but boro number  niye show korte gele error asbe accurete hobe na..

    cout << fixed << 1e24 << endl; // but 1e24 er value 1000000000000000000000000 howar kotha silo ,

    //! online programing contest a must constrain and input format , output format dekhte hobe, range er kotha mathai rakhte hobe

    return 0;
}