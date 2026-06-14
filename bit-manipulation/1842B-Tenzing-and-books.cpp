// This here is an example to show why you must know about operator precedence. If the parethesis in the for conditions are not used, it would give wrong answer because != has higher precedence than |.
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
    int n=0,x=0;
    cin>>n>>x;
    vector<int>s1(n,0);
    for(int i=0;i<n;i++) cin>>s1[i];
    vector<int>s2(n,0);
    for(int i=0;i<n;i++) cin>>s2[i];
    vector<int>s3(n,0);
    for(int i=0;i<n;i++) cin>>s3[i];
    
    int ans=0;
    for(int i=0;i<n;i++){
        if((x|s1[i])!=x) break;
        ans = ans | s1[i];
    }
    for(int i=0;i<n;i++){
        if((x|s2[i])!=x) break;
        ans = ans | s2[i];
    }
    for(int i=0;i<n;i++){
        if((x|s3[i])!=x) break;
        ans = ans | s3[i];
    }
    
    ans==x ? cout<<"Yes" : cout<<"No";
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