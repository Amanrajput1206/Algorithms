// it is a simple question but here as a reference for how to find the coordinates when a matrix is rotated by 180 degree

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
    int n=0,k=0;
    cin>>n>>k;
    vector<vector<int>>grid(n,vector<int>(n,0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    int cost=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]!=grid[n-1-i][n-1-j]) cost++;
        }
    }
    
    cost = cost/2;
    if(cost>k){
        cout<<"No"<<'\n';
        return;
    }
    else if((k-cost)%2==0){
        cout<<"Yes"<<'\n';
        return;
    }
    else if(n%2==1){
        cout<<"Yes"<<'\n';
        return;
    }
    else{
        cout<<"No"<<'\n';
        return;
    }
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