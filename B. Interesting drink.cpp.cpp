#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define int long long
#define vll vector<int>
#define nn '\n' 

#define all(x) (x).begin(), (x).end() 

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vll v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));
    int query;
    cin >> query;
    while(query--) {
        int x;
        cin >> x;
        cout << upper_bound(all(v),x) - v.begin() << nn;
    }
}
int32_t main()
{
    FastIO;
    solve();

    return 0;
}
 
