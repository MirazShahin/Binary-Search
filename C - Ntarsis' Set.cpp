#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 
const int N = 2e5 + 7;
#define nn      '\n'  
using namespace std;  
int v[N];
int n, k;
bool check(long long x) {
    for(int i = 1; i <= k; i++ ) {
       x -= upper_bound(v + 1, v + n + 1, x) - v - 1;  
    }
    return x >= 1;
}
void solve() { 
    cin >> n >> k; 
    for(int i = 1; i <= n; i++ ) cin >> v[i];
    long long ans = 0;
    long long l = 1, r = 1e15;
    while(l <= r) {
        long long mid = (l + r) / 2;
        if(check(mid)) {
           ans = mid;
           r = mid - 1;
        }
        else { 
           l = mid + 1;
        }
    }
    cout << ans << nn;
}
int32_t main() {
    FastIO;   
    int test_case = 1; 
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
      // cout << "Case " << Case << ": \n";
        solve();
        Case++;
    }

    return 0;
}
