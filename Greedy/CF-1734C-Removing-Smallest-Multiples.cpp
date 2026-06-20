// Start scanning from left, and starting from the first non visited value that you find, simply mark all it's consecutive multiples for the same cost until the chain breaks and keep adding them to the cost. 

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
    string T;
    cin>>T;

    ll sum=0;
    vector<bool>vis(n,false);
    for(int i=0;i<n;i++){
        
        for(int k=i;k<=n;k+=i+1){
            if(T[k]=='0'){
                if(!vis[k]) {
                    sum+=(ll)i+1;
                    vis[k]=true;
            }
        }
            else break;
        }
    }
    cout<<sum<<'\n';
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