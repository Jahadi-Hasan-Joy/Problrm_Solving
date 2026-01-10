#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    //!   loop
    //* keep in mind that loop need to be terminated otherwise it will run infinitely.

    //?  for loop
    //* for(initialization; condition; increment/decrement)
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "for loop end" << endl;

    //? while loop
    //* while(condition)
    int i = 1;
    while (i <= 10)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
    cout << "while loop end" << endl;

    //? do-while loop
    //* do{ //code} while(condition); // atar while conditon e true hok ba na hok do akbar run hobai
    int j = 1;
    do
    {
        cout << j << " ";
        j++;
    } while (j >= 5);
    cout << endl;
    cout << "do while loop end" << endl;

    //! in other loop if condition is false then it will not execute the loop body but in do-while loop it will execute the loop body at least once.

    //? infinite loop
    int k = 1;
    while (1)
    {
        cout << k << " ";
        k++;
        if (k > 5)
        {
            break; //* to break the infinite loop
        }
    }
    cout << endl;
    cout << "infinite loop end" << endl;
    //! we must use break statement with any condition to break the infinite loop otherwise it will run infinitely.

    //* in for loop we can do same thing by using for(;;) loop.
    k = 5;
    for (;;)
    {
        if (k == 0)
        {
            break; //* to break the infinite loop
        }
        cout << k << " ";
        k--;
    }
    cout << endl;
    cout << "infinite of for loop end" << endl;
    cout << "okkk" << endl;

    //? nested loop
    //* in nested loop we can use one loop inside another loop.
    //* multi dimensional array, matrix, etc. are used in nested loop.
    //! here (i) is controling row and (j) is controlling column. (outer loop is controlling row and inner loop is controlling column)
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << i << " " << j << " | ";
        }
        cout << endl;
    }
    cout << endl;

    //? pattern printing
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //? pattern printing, triangle
    int m = 5;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //? pattern printing, down triangle
    int q = 5;
    for (int i = q; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //? pattern printing, piramid
    int p = 5;
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= p - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //? pattern printing,down piramid
    int r = 5;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < r - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //? break and continue statement will be continue in the next file as 4_break_continue.cpp

    //* triangle patern

    int row = 5;

    for (int i = 0; i < row; i++)
    {
        for (int j = row - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //! pascal triangle

    int t = 5;

    for (int i = 0; i < t; i++)
    {
        int digit = 1;
        for (int s = t - i - 1; s > 0; s--)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << digit << " ";
            digit = digit * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}