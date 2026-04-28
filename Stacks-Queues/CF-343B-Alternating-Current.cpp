// The entire problem is just to be able to understand the basis. The solution is basically valid parenthesis problem. if +ve goes over -ve for two steps in a row, that just means for those 2 steps it is just lying over -ve can be easily untangled. Same goes for consequtive -ve . The only way it gets tangled is when the -ve and +ve wires are braided. Another way to think can be this, think of them as parallel wires already plugged in. Now if you try to braid the already plugged in parallel wires, for every crossover you will have 2 steps of the same wire landing above, and eventually you can untangle them. 

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
    string s;
    cin>>s;
    
    stack<char>st;
    
    for(int i=0;i<s.size();i++){
        if(st.empty()) st.push(s[i]);
        else{
            char c = st.top();
            if(c==s[i]) st.pop();
            else st.push(s[i]);
        }
    }
    if(st.empty()){
        cout<<"Yes";
    }
    else cout<<"No";    
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