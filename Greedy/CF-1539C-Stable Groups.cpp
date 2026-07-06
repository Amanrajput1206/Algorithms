// integer ceil division
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
    ll n=0,k=0,x=0;
    cin>>n>>k>>x;
    vector<ll>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll groups=1;
    vector<ll>gaps;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        ll diff = arr[i] - arr[i-1];
        if (diff > x) gaps.push_back(diff);
    }
    // cout<<'\n';
    // for(auto x:gaps){
    //     cout<<x<<" ";
    // }
    groups+=gaps.size();
    sort(gaps.begin(),gaps.end());
    for(int i=0;i<gaps.size();i++){
        ll cost = (gaps[i] + x - 1) / x - 1; 
        if (k - cost >= 0) { k -= cost; groups--;}
    }
    
    cout<<groups<<'\n';
    }

int main() {
    fastio

    int tc = 1; 
    // cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}