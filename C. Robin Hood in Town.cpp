#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 

using ll = long long; 
#define nn      '\n'  
using namespace std; 

bool check(vector<int> &v, int n, ll mid) {
    ll sum = accumulate(v.begin(), v.end(), 0LL); 
    ll cnt = 0;
    int lagbe = n / 2 + 1;
    for(int i = 0; i < n; i++ ) {
        ll x = (sum + mid - 1) / (2LL * n);
        if(x >= v[i]) cnt++;
        if(cnt >= lagbe) return true;
    }
    return cnt >= lagbe;
}
void solve() {  
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    if(n <= 2) {
        cout << -1 << nn;
        return;
    }
    vector<int> x = v; 
    ll ans = 0;
    ll low = 0, high = 1e15;
    while(low <= high) {
        ll mid = (low + high) / 2;
        if(check(v, n, mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << ans << nn;
}
int32_t main() {
    FastIO;    
    int test_case = 1; 
    cin >> test_case;  
    while (test_case--) {
        solve();
    }

    return 0;
}
