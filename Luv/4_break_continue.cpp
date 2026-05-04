#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    //?  Break and continue statement
    //* break statement is used to break the loop and continue statement is used to skip the current iteration and move to the next iteration.
    for (int i = 1; i <= 10; i++)
    {
        if (i == 7)
        {
            break; //* break the loop when i is 7
        }
        cout << i << " ";
    }
    cout << endl;

    //?  continue statement
    for (int i = 1; i <= 10; i++)
    {
        if (i == 7)
        {
            continue; //* skip the current iteration when i is 7,  7 is not printed
        }
        cout << i << " ";
    }
    cout << endl;

    
    //? break statement in nested loop and if statement
    for (int i = 1; i <= 3; i++)
    {
        cout << "i = " << i << endl;
        if (i == 2)
        {
            if (true)
            {
                if (true)
                {
                    break; //* break the loop when i is 2
                    //! break statement will break the innermost loop , jotoi if statement thakuk na keno., last j loop er moddhe ase ota break hobe.
                }
            }
        }
    }
    cout << "End of loop" << endl;



    //? lets practice some problems

    //*   take user input until 42 is entered, then break the loop, other wise continue the loop and take user input again.
    cout << "Enter a number: ";
    while (true)
    {
        int n;
        cin >> n;
        if (n == 42)
        {
            break; //* break the loop when n is 42
        }
        cout << n << endl;
    }
    cout << "End of the loop" << endl;


    //* sum of digit 1 to n number, suppose n = 5, then  sum of the number from 1 to n.
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of digit 1 to n = " << sum << endl;


    //*  suppose if we need some number last digit
    int x = 123;
    int last_digit = x % 10; //* last digit of x
    //! last digit ber korte hole % 10 use korte hoy. avabe jodi last 2 digit ber korte hoy tahole % 100 use korte hobe
    cout << "Last digit of " << x << " = " << last_digit << endl;
 

    //*  take a number as input and sum of all the digits of the number.( suppose n = 1234, then sum = 1 + 2 + 3 + 4 = 10)
    int num = 378245, sum_of_digit = 0;
    while (num > 0)
    {
        int last_digit = num % 10;  //* last digit of num
        sum_of_digit += last_digit; //* add the last digit to sum_of_digit
        num /= 10;                  //* remove the last digit from num
    }
    cout << "Sum of all digits = " << sum_of_digit << endl;

    return 0;
}