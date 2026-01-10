#include <bits/stdc++.h>
using namespace std;
#define ll long long


//!   if we declare outside of the main function then it will be global variable and we can access it anywhere in the code

int global = 10; // global variable


int main()
{
    //?   conditional statements

    int a = 3, b = 4, c = 2;
    cout << "a equal equal b = " << (a == b) << endl; // 0, cause 3 is not equal to 4
    cout << "a Not equal b = " << (a != b) << endl;   // 1, cause 3 is not equal to 4
    cout << "a greater than b = " << (a > b) << endl; // 0, cause 3 is not greater than 4

    cout << "a greater than b and b less than c = " << ((a < b) && (b < c)) << endl; // 0, cause 3 is less than 4 but 4 is not less than 2 //! both conditions should be true to get true in "&&" AND operator
    cout << "a greater than b or b less than c = " << ((a < b) || (b < c)) << endl;  // 1, cause 3 is less than 4 but 4 is not less than 2 //! one condition should be true to get true in "||" OR operator

    //?  if else statements
    int x = 5, y = 6;
    //* even check
    if (x % 2 == 0)
    {
        cout << "x is even" << endl;
    }
    else
    {
        cout << "x is not even" << endl;
    }

    //*  odd checking
    if (y % 2 != 0)
    {
        cout << "y is odd" << endl;
    }
    else
    {
        cout << "y is even" << endl;
    }

    //! we can check even odd another way also
    if ((x & 1) == 0) //* if last bit is 0 then even else odd
    {
        cout << "x is even" << endl;
    }
    else
    {
        cout << "x is odd" << endl;
    }
    //* in that case if any odd number last binary value will be 1 and even will be 0 so when we do bitwise & with 1 it will give us 0 for even and 1 for odd

    //?  nested if else statements ,which is, if else statements inside of another if else statements
    int n = 12;
    if (n % 2 == 0)
    {
        cout << "n is even, ";
        if (n % 3 == 0)
        {
            cout << "n is divisible by 3" << endl;
        }
        else
        {
            cout << "n is not divisible by 3" << endl;
        }
    }
    else
    {
        cout << "n is odd" << endl;
    }

    //? if else ladder
    int marks = 85;
    if (marks >= 90)
    {
        cout << "Grade A" << endl;
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "Grade C" << endl;
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "Grade F" << endl;
    }


    //?  scope of variables
    int x1 = 10; // local variable
    if(x1 == 10)
    {
        int x2= 20; // local variable inside the if block
    }
    cout << "x1 = " << x1 << endl; // 10
    cout << "x2 = "<< endl;   //!   << x2 << endl; error, x2 is not defined outside the if block(remove the comment to see the error)

    //?  global variable ( defined outside the main function)
    cout << "global = " << global << endl; // 10, we can access the global variable anywhere in the code

    //!  loop will be continue in another file 4_loop.cpp

    
    return 0;
}