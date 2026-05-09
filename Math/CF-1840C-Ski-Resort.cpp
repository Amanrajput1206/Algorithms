// The core idea of this question is based on counting the number of subtrings until length L starting from length k. The number of subtrings of length k in a string of length L is L-k+1. If you find the sum of all substrings from length k to L, you will find that it is equal to the sum of m natural numbers where m=L-k+1. This is the main idea behind the solution of this problem.
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
    int n=0,k=0,q=0;
    cin>>n>>k>>q;
    vector<int>temp(n,0);
    for(int i=0;i<n;i++){
        cin>>temp[i];
    }
    int streak=0;
    ll totalWays=0;
    for(int i=0;i<n;i++){
        if(temp[i]>q){
            ll m=streak-k+1;
            if(streak<k){
                streak=0;
                continue;
            }
            else{
                totalWays+=(1ll)*m*(m+1)/2;
            }
            streak=0;
        }
        else if(temp[i]<=q){
            streak++;
        }
    }
    if(streak>=k){
        ll m=streak-k+1;
        totalWays+=(1ll)*m*(m+1)/2;
    }
    cout<<totalWays<<'\n';
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