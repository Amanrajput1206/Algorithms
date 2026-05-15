//The solution is simple, but it is here because I was having trouble in keeping the track of elements while sliding the window. This is here as an example. There is also a solution where a for loop can be used instead of while loop starting from k and the window can be from i-k+1 to i. Consider it as a reminder to try that as well.
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
    int n = 0, k = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int i = 0, j = 0;
    int w = 0;
    int minCount = 1e9;
    
    while (j < n) {
        if (s[j] == 'W') {
            w++;
        }
        
        if ((j - i + 1) == k) {
            minCount = min(minCount, w);
            

            if (s[i] == 'W') {
                w--;
            }
            i++; 
        }
        
        j++;
    }
    
    cout << minCount << '\n';
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