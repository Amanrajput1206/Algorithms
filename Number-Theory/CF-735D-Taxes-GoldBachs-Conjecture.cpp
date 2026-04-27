// The solution for this question is quite simple. What's noteworthy is the code that checks for Prime numbers. Also note that the solution for this question is based on Goldbach's Conjecture which states that every even integer greater than 2 can be expressed as the sum of two primes. If a number is odd, and n-2 is prime, we can divide it as [2,prime] which gives 2. If n is odd and n-2 is not prime then we can just do n-3 and make it prime and the division would then look like [3,even] = [3,prime,prime] => 3. So the only possible answers are 1,2 and 3.

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

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    // Start at 5, and check i and i+2 (skipping even numbers and multiples of 3)
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
void solve() {
    //Write Code here
    int n=0;
    cin>>n;
    if(isPrime(n)){
        cout<<1;
        return;
        }
    else if(n%2==0 || (isPrime(n-2))){
        cout<<2;
        return;
    }
    else cout<<3;
    
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