// since we have to make min k numbers, we can find a contiguous range in which we can find the number because for every set we can replace the number with a +1 number and make the next one. Greedy fails here because we need exactly k numbers and hence interleaving might be required for optimal solution. 

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
    ll n, k, x;
    cin >> n >> k >> x;

    ll min_sum = k * (k + 1) / 2;
    ll max_sum = k * n - k * (k - 1) / 2;

    if (x >= min_sum && x <= max_sum)
        cout << "YES\n";
    else
        cout << "NO\n";
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