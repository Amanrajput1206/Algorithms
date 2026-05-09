// This code is here as an Example of how to use custom comparator in c++, basically, if a<b is true then a comes before b. So this sorting will be ascending order.
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
    int n=0,k=0;
    cin>>n>>k;
    vector<pair<int,int>>hp;
    for(int i=0;i<n;i++){
        int x=0;
        cin>>x;
        int mod = x%k;
        if (mod==0) mod=k;
        hp.pb({mod,i});
    }
    
    sort(hp.begin(),hp.end(),[](const pair<int,int>&a,const pair<int,int>&b){
        if(a.first==b.first) return a.second<b.second;
        return a.first>b.first;
    });
    for(auto x:hp){
        cout<<x.second+1<<" ";
    }
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