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
    vector<int>v(n,0);
    int max1=0,max2=0;
    for (int i = 0; i < n; ++i)
    {
        int x=0;
        cin>>x;
        v[i]=x;
    }
    int i=0;
    int val=n;
    // skip the part where it is already max decreasing
    while(i<n and v[i]==val){
        i++;
        val--;
    }
    
    //findig max of the remaining array
    max1=i;
    for(int j=i;j<n;j++){
        if(v[j]>v[max1]){
            max1=j;
        }
    }
    
    //since we know that the max will always start with the next largest number so regardless we just find the largest and bring it to the front by reversal.
    reverse(v.begin()+i,v.begin()+max1+1);
    
    for(auto x:v){
        cout<<x<<" ";
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
