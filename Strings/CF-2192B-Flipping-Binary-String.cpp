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
// The point is, we want to flip all 1s odd times, however we can do it. So if the number of 1s is even we can flip all bits for each one, this way each one will be flipped odd times and each 0 will be flipped even times. Alternatively, if the numer of 0s is odd, then for each 0 we can flip all the other bits, this will flip all 0s even times and all 1s odd times. 
void solve() {
    //Write Code here
    int n=0;
    cin>>n;
    string s;
    cin>>s;
    
    int ones = count(s.begin(),s.end(),'1');
    int zeroes = count(s.begin(),s.end(),'0');
    if(ones%2==1 && zeroes%2==0){
        cout<<-1<<'\n';
        return;
    }
    else if(ones==0){
        cout<<0<<'\n';
        return;
    }
    if(ones%2==0){
        cout<<ones<<'\n';
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cout<<i+1<<" ";
            }
        }
        cout<<'\n';
    }
    
    else if(zeroes%2==1){
        cout<<zeroes<<'\n';
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cout<<i+1<<" ";
            }
        }
        cout<<'\n';
    }
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
