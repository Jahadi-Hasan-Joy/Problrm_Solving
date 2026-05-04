#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    //? String

    string s1 = "Hello";
    string s2 = "World";
    string s3 = s1 + " " + s2; //*concatenation of two strings
    int l = s3.length();       //*length of the string
    cout << s3 << endl;        // output: Hello World
    cout << l << endl;         // output: 11
    cout << s3.size() << endl; // output: 11
    cout << s3[0] << endl;     // output: H
    s3[0] = 'h';               //! changing the first character of the string  can not use "h" , must use 'h' of single quotes
    cout << s3 << endl;        // output: hello World

    for (int i = 0; i < s3.length(); i++)
    {
        cout << s3[i] << " ";
    }
    cout << endl;

    string s4;
    cout << "Enter a string: ";
    getline(cin, s4); //?getline is used to take input of string with spaces and full line
    //! cin use korle just first word ta input nibe, baki ta nibe na
    cout << s4 << endl; // output: Hello World

    //! loop er moddhe string getline diye niyar age cin.ignore()  use korte hobe
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;     //? t = number of test cases
    cin.ignore(); //? ignore the previous input
    while (t--)
    {
        string s5;
        cout << "Enter a string: ";
        getline(cin, s5);
        cout << s5 << endl; // output: Hello World
    }

    //? string reverse using iterators

    string str = "hollo wollo";
    int len = str.length();
    string s7 = "";
    for (int i = len - 1; i >= 0; i--)
    {
        s7 += str[i]; //? s7 = s7 + s6[i]
    }
    cout << s7 << endl; // output: ollow olloh
    //! this method not good for time complexity

    //* we can use this method
    string str_rev = "";
    for (int i = len - 1; i >= 0; i--)
    {
        str_rev.push_back(str[i]);
    }
    cout << str_rev << endl; // output: dlroW olleH
    cout << endl;

    //? Let check the string in palindrom or not
    //*  a string is palindrome if the main string and reverse string are same

    if (str == str_rev)
    {
        cout << "The string is palindrome" << endl;
    }
    else
    {
        cout << "The string is not palindrome" << endl;
    }
    //* time complexity of this method is O(n)
    //! but this method is not good, it take to check full string , in another method we can check only half of the string

    //* we can use this method
    int len_half = len / 2;
    bool is_palindrome = false;
    for (int i = 0; i < len_half; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            is_palindrome = false;
            break;
        }
        else
        {
            is_palindrome = true;
        }
    }
    if (is_palindrome)
    {
        cout << "The string is palindrome" << endl;
    }
    else
    {
        cout << "The string is not palindrome" << endl;
    }
    //* time complexity of this method is O(n/2)

    return 0;
}