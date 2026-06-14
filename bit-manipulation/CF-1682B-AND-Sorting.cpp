// This works because the X we find here is definitely present in the array and any number ANDed with X becomes x, so Any number can be swapped with X. 

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
    vector<int>arr(n,0);
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]!=i) ans=ans&i;
    }
    ans == INT_MAX ? cout<<0 : cout<<ans;
    cout<<'\n';
    
    
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