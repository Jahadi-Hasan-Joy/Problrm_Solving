#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s = "Hello World";
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;

    //? checking if the string is a palindrome or not
    int loop_ = len / 2;
    bool is_palindrome = true;
    for (int i = 0; i < loop_; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            is_palindrome = false;
            break;
        }
        
    }
    if (is_palindrome)
    {
        cout << "The string is a palindrome" << endl;
    }
    else
    {
        cout << "The string is not a palindrome" << endl;
    }

    //* reverse the string using a loop
    string rev_s = "";
    for (int i = len - 1; i >= 0; i--)
    {
        rev_s.push_back(s[i]);
    }
    cout << "The reversed string is: " << rev_s << endl;

    //* string build in functions
    string s1 = "Good";
    string s2 = "Boy";
    string s3 = s1 + " " + s2;
    cout << "The concatenated string is: " << s3 << endl;

    reverse(s3.begin(), s3.end());
    cout << "The reversed string is: " << s3 << endl;

    //* string build in functions operations
    cout << "is lower case: " << islower(s1[0]) << endl;
    cout << "is upper case: " << isupper(s1[0]) << endl;
    cout << "is alpha: " << isalpha(s1[0]) << endl;
    cout << "is digit: " << isdigit(s1[0]) << endl;
    cout << "is space: " << isspace(s1[0]) << endl;
    cout << "is ascii: " << ((s1[0] >= 0 && s1[0] <= 127) ? 1 : 0) << endl;
    cout << "to upper case: " << (char)toupper(s1[0]) << endl; //* convert lowercase to uppercase
    cout << "to lower case: " << tolower(s1[0]) << endl; //* convert uppercase to lowercase

    return 0;
}