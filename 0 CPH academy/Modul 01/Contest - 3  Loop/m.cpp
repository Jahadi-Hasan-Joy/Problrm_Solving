#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    vector<string> balls(6);
    for (int i = 0; i < 6; i++) {
        cin >> balls[i];
    }

    int count = 0;
    bool found = false;
    
    for (int i = 0; i < 6; i++) {
        if (balls[i] == "W") {
            count++;
            if (count == 3) {
                found = true;
                break;
            }
        } else {
            count = 0; // Reset count if not 'W'
        }
    }
    
    cout << (found ? "YES" : "NO") << '\n';
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
