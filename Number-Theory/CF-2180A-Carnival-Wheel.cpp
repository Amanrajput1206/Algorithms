// The solution for this problem is based on extended Euclidean algorithm and Bézout's Identity to find the largest integer `x` such that x < l and x ≡ a (mod b). In simple words, this identity states that k·b mod l cycles through exactly the multiples of gcd(b, l). Hence we just need to find the largest number which is found when we start from a and keep adding the gcd(b, l) until we reach or exceed l. The largest such number will be our answer.

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
    //Write Code here
    int l=0,a=0,b=0;
    cin>>l>>a>>b;
    
    int g = gcd(b,l);
    
    int ans = l - 1 - ((l - 1 - a) % g);
    cout << ans << '\n';
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