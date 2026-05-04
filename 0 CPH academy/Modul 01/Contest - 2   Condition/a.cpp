#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    
    bool pair1;
    if(a > b) swap(a, b);
    pair1 = (b - a == 1 || b - a == 4);
    
    bool pair2;
    if(c > d) swap(c, d);
    pair2 = (d - c == 1 || d - c == 4);
    
    if(pair1 == pair2)
        cout << "Yes\n";
    else
        cout << "No\n";
    
    return 0;
}
