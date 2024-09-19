#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 
const int N = 1e6 + 7;
#define nn      '\n'  
using namespace std; 
 
void solve() { 
   double c; cin >> c;
   double low = 1, high = 1e10; 
   while(high - low > 1e-7) {
      double mid = (high + low) / 2;
      if(mid * mid + sqrt(mid) < c) {
         low = mid;
      }
      else {
        high = mid;
      }
   }
   cout << fixed << setprecision(10) << high << nn;
}

int32_t main() {
    FastIO;   
    int test_case = 1; 
   // cin >> test_case;
    int Case = 1;
    while(test_case--) {
        solve();
        Case++;
    }

    return 0;
}
