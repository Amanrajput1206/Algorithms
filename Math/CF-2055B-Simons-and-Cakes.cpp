// Here as a reference for finding the number composed of unique prime factors of another number

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
    int n=0;
    cin>>n;
    
    ll res = 1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            res*=i;
            while(n%i==0) n=n/i;
        }
    }
    if (n > 1) res *= n;
    cout<<res<<'\n';
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