#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;


ll f(ll n) {
    ll ways = 0;
    // In this loop we are simply checking if the last theif can accomodate chocolates if the first theif take atleast 1.
    // The floor condition is just checking how many times (meaning sequences eventually) the last theif can steal chocolates.
    // eg. if n/k^3 is 6, that means 6k^3 is possible, so a=1,2,3,4,5,6 all of them will be possible since k^3 is the last theif's stolen amount. Hence number of sequences will be 6.
    for (ll k = 2; k * k * k <= n; k++)
        ways += n / (k * k * k);
    return ways;
}

void solve() {
    //Write Code here
    ll m;
    cin >> m;

    ll lo = 1, hi = LLINF, ans = -1;
    while (lo <= hi) {
        ll mid = lo + (hi-lo)/2;
        if (f(mid) >= m) {
            ans = mid;
            hi = mid - 1;   
        } else {
            lo = mid + 1;
        }
    }

    if (ans == -1 || f(ans) != m)
        cout << -1;
    else
        cout << ans;
    }

int main() {
    fastio

    int tc = 1; // Number of test cases
    // cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}