//The solution for this problem is based sum of absolute differences problem, thus finding the sum of absolute differences of all the pairs (each take a single time) by running a nested loop from the left with each nested loop ending on the left side. So to make it O(n), we use prefix arrays (hence ending on the left side). Also notice the constraint on n*m, meaning n and m are inversely propotional and both cannot be large at the same time.  So the approach is basically O(m*nlogn).

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
    int n=0,m=0;
    cin>>n>>m;
    vector<vector<int>>mat(m,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[j][i];
        }
    }
    ll total=0;
    for(int i=0;i<m;i++){
        sort(mat[i].begin(),mat[i].end());
        ll winnings=0;
        ll pref=0;
        for(int j=0;j<n;j++){
            winnings=winnings+(ll)mat[i][j]*j-pref;
            pref+=mat[i][j];
        }
        total=total+winnings;
    }
    cout<<total<<'\n';
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