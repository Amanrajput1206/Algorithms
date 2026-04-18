// This here is the easy version of the problem where only one k is provided. The solution I have written for this problem is actually the complete implementation which is not required and is unnecessary complex. In the question you are required to flip the bits in a way that all of them finally become equal to the value of the special index. Now we turn this into a counting problem. The important point to be noted here is that every time there is a boundary or swtich, we know that it will require a flip to adjust, regardless of which side is the wrong one. We imagine a window that keeps shrinking in a way that all the bits outside of it have the correct parity after the flip. Such a window will always cause a flip at the boundary location. now since we have both left and right sides, we can just imagine a two pointer window form l to r causing the flip and then shrinking. So the flips will be from left to right unless one side gets in order and then the window would only shirink for the other side and the count continues until the pointer of both sides converge on the special index. Hence we count the max(l,r) flips because their will overlap until one of the sides get exhausted. The solution looks simple to program but you need to really understand how it's working.

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
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    vector<int>ks(k,0);
    for(int i=0;i<k;i++){
        cin>>ks[i];
    }
    int p=ks[0]-1;
    
    int sp=v[p];
    bool flips=0;
    int left=0;
    int right=n-1;
    int lFlips=0;
    int rFlips=0;
    while(left<=p){
        if((!flips && v[left]==sp) || flips && v[left]== !sp) left++;
        else{
            while(left<=p && v[left]==v[left+1]) left++;
            flips = !flips;
            lFlips++;
            left++;
        }
    }
    flips=0;
    while(right>=p){
        if((!flips && v[right]==sp) || (flips && v[right] == !sp)) right--;
        else{   
            while(right>=p && v[right]==v[right-1]) right--;
            flips = !flips;
            rFlips++;
            right--;
        }
    }
    int ans=max(lFlips,rFlips);
    cout<<ans<<'\n';
    
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