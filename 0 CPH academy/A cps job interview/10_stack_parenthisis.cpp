#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    stack<char> st;

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (c == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (c == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (c == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
    }
    if (st.empty())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}