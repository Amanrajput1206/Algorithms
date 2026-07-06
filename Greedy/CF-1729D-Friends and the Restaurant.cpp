// The point is, if a person is too negative then it is better to exclude him from the group. A group of 3 with 2 positive to balance one negative is no better than a group of only 2 positive. 
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
    vector<int>x(n,0);
    for(int i=0;i<n;i++) cin>>x[i];
    vector<int>y(n,0);
    for(int i=0;i<n;i++) cin>>y[i];
    
    vector<int>d(n,0);
    
    for(int i=0;i<n;i++){
        d[i]=y[i]-x[i];
    }
    sort(d.begin(),d.end());
    int l=0;
    int r=n-1;
    int cnt=0;
    while(l<r){
        if(d[l]+d[r]>=0){
            cnt++;
            l++;
            r--;
        }
        else if(d[l]+d[r]<0){
            l++;
        }
    }
    cout<<cnt<<'\n';
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