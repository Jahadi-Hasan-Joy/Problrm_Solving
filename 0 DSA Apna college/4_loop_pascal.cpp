#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int x = 0; x < n - i; x++)
        {
            cout << "  ";
        }

        int c = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << c << "   ";
            c = c * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}
