// Strategy : When you write out all the possible outcomes, you can observe that Alice wins only if there is a 1 on either left or right end of the array as she can just steamroll everything in beteween and leave 11 at the end to force bob to make it 0 in the next turn.
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
    int n=0;
    cin>>n;
    vector<int>a(n,0);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    if(a[0]==1 or a[n-1]==1) cout<<"Alice";
    else cout<<"Bob";
    cout<<'\n';
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

