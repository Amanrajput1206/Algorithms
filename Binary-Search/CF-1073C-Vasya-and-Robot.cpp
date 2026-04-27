//The solution is very simple, the complexity is only because of the implementation. The solution is this - you want to know the min length in which the alteration will make the robot end in the right place. So we are basically brute forcing for each length, where the length is calibrated using binary search. For each length, you need to check if there is any possible window which can provide the solution. Solution is possible if the offset of position from the operations outside the current window can be netralized by the length of the current window. This actually uses the fact that if a window of len gives the answer then len+1 will also be correct and if len is too short then len-1 will also be short. 

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

bool isok(int len, int n, int target_x, int target_y, const vector<int>& pref_x, const vector<int>& pref_y) {
    // Slide a window of size 'len'
    // i is the start of the window, j is the end (1-based indexing)
    for(int i = 1; i <= n - len + 1; i++) {
        int j = i + len - 1; 
        
        // Operations OUTSIDE the window: (Prefix before i) + (Suffix after j)
        int curr_x = pref_x[i - 1] + (pref_x[n] - pref_x[j]);
        int curr_y = pref_y[i - 1] + (pref_y[n] - pref_y[j]);
        
        // Distance needed to reach target from curr_x, curr_y
        int dist = abs(target_x - curr_x) + abs(target_y - curr_y);
        
        // If we have enough steps in our window (len), and the parity matches
        if(dist <= len && (len - dist) % 2 == 0) {
            return true; 
        }
    }
    return false; // No window of this length worked
}


void solve() {
    //Write Code here
    int n=0;
    cin>>n;
    string s;
    cin>>s;
    
    int x=0,y=0;
    cin>>x>>y;
    
    
    vector<int>pref_x(n+1,0);
    vector<int>pref_y(n+1,0);
    
    for(int i=0;i<n;i++){
        pref_x[i+1]=pref_x[i];
        pref_y[i+1]=pref_y[i];
        
        if(s[i]=='U') pref_y[i+1]++;
        else if(s[i]=='D') pref_y[i+1]--;
        else if(s[i]=='R') pref_x[i+1]++;
        else if(s[i]=='L') pref_x[i+1]--;
    }
    
    int l=0;
    int r=n;
    int ans=-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(isok(mid,n,x,y,pref_x,pref_y)){
            ans=mid;
            r=mid-1;         
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<'\n';
    
}

int main() {
    fastio

    int tc = 1; // Number of test cases
    // cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}