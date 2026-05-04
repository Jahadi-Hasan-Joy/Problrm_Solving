#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int64 D;
    if(!(cin >> D)) return 0;
    int64 lim = (int64)floor(sqrt((long double)D)) + 1;
    int64 ans = LLONG_MAX;
    for(int64 x = 0; x <= lim; ++x){
        int64 x2 = x * x;
        long double rem_ld = (long double)D - (long double)x2;
        if(rem_ld >= 0){
            int64 y0 = (int64)floor(sqrt(rem_ld));
            for(int k = 0; k <= 1; ++k){
                int64 y = y0 + k;
                int64 val = x2 + y*y;
                int64 diff = val >= D ? val - D : D - val;
                if(diff < ans) ans = diff;
            }
        } else {
            // x^2 > D, best for this x is y = 0
            int64 val = x2;
            int64 diff = val - D;
            if(diff < ans) ans = diff;
        }
        if(ans == 0) break;
    }
    cout << ans << '\n';
    return 0;
}
