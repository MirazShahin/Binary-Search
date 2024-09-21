#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define int long long
#define vll vector<int>
#define nn '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b) / gcd(a,b)

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define sp " "
#define pi 3.1415926535897932384626433832795

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;
const int MAX=(int)1e6+5;
int Divisor[MAX];
 
int days, point_to_pass, lesson_point, lab_point;
bool points(int x)
{
    int total_lab_day = (days + 6) / 7;
    int ans = x * lesson_point + lab_point * min(2 * x, total_lab_day);
    return ans >= point_to_pass;
}
void solve()
{
    cin >> days >> point_to_pass >> lesson_point >> lab_point;

    int low = 0, high = days;
    int ans = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(points(mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << days - ans << nn;

}
int32_t main()
{
    FastIO;

    //divisor_count();
    int test_case;
    cin>>test_case;

    while(test_case--) {
        solve();
    }

    return 0;
}
 
