// The edge case to be kept in mind is that the string s can start from near end of x and thus you may require 1 addition after the length of s to check.

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

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    
    int operations = 0;
    while (x.size() < m) {
        x += x;
        operations++;
    }

    if (x.find(s) != string::npos) {
        cout << operations << '\n';
        return;
    }

    x += x;
    operations++;
    if (x.find(s) != string::npos) {
        cout << operations << '\n';
        return;
    }

    cout << -1 << '\n';
}

int main() {
    fastio

    int tc = 1; // Number of test cases
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}