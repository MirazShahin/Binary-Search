#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 
const int N = 1e6 + 7;
#define nn      '\n'  
using namespace std; 

long long arr[N];
long long n, m;
bool check(long long mid) {
   int cnt = 1;
   int initial = arr[1];
   for(int i = 2; i <= n; i++ ) {
      if(arr[i] - initial >= mid) {
         cnt++;
         initial = arr[i];
      }
   }
   return cnt >= m;  
}
void solve() { 
    cin >> n >> m;
    for(int i = 1; i <= n; i++ ) cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    long long low = 0, high = 1e9, ans = 0; 
    while(low <= high) {
        long long mid = (low + high) / 2;
        if(check(mid)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
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
        solve();
        Case++;
    }

    return 0;
}
