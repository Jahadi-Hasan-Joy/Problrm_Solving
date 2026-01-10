#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    stack<int> ss;
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        while(!ss.empty() && ss.top()<top)
        {
            s.push(ss.top());
            ss.pop();
        }
        ss.push(top);
    }

    while (!ss.empty())
    {
        cout << ss.top() << " ";
        ss.pop();
    }

    return 0; 
}