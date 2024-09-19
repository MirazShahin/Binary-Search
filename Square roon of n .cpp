#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 
const int N = 2e5 + 7;
#define nn      '\n'  
using namespace std; 
 
void solve() { 
    double n; cin >> n;
    double low = 1, high = n; 
    while(high - low > 1e-7) {
        double mid = (low + high) / 2;
        if(mid * mid < n) {
            low = mid;
        }
        else {
            high = mid;
        }
    }
    cout << low << nn;
}

int32_t main() {
    FastIO;   
    int test_case = 1; 
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
        solve();
        Case++;
    }

    return 0;
}
