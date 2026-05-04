#include <bits/stdc++.h>
using namespace std;
#define ll long long

string binary(int n)
{
    int bin[8] = {0};
    if (n >= 0)
    {
        for (int i = 7; i >= 0 && n > 0; i--)
        {
            bin[i] = n % 2;
            n /= 2;
        }
    }
    else
    {
        n = abs(n);
        for (int i = 7; i >= 0 && n > 0; i--)
        {
            bin[i] = n % 2;
            n /= 2;
        }
        for (int i = 0; i < 8; i++)
            bin[i] = 1 - bin[i];
        for (int i = 7, c = 1; i >= 0 && c; i--)
        {
            c = (bin[i] + 1) / 2;
            bin[i] = (bin[i] + 1) % 2;
        }
    }
    string s = "";
    for (int i = 0; i < 8; i++)
        s += to_string(bin[i]);
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << binary(n) << endl;
}
