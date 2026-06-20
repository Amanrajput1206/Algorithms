// chaining logic

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
    int n; cin >> n;
    map<int,int> freq;
    for (int i = 0; i < n; i++) { int x; cin >> x; freq[x]++; }
    
    int ans = 0;
    for (auto& [v, cnt] : freq) {
        int prev = freq.count(v-1) ? freq[v-1] : 0;
        ans += max(0, cnt - prev);
    }
    cout << ans << '\n';
}    

int main() {
    fastio

    int tc = 1; 
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}