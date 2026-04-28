// This problem is here as an Example to show how tokenization works in C++.

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
    int n;
    if (!(cin >> n)) return;

    vector<string> path_stack;

    while (n--) {
        string cmd;
        cin >> cmd;

        if (cmd == "pwd") {
            // Print the current path
            cout << "/";
            for (const string& dir : path_stack) {
                cout << dir << "/";
            }
            cout << "\n";
        } 
        else if (cmd == "cd") {
            string path;
            cin >> path;

            // 1. Check if it's an absolute path
            if (path[0] == '/') {
                path_stack.clear();
            }

            // 2. Tokenize the string
            stringstream ss(path);
            string token;

            // getline extracts characters from 'ss' into 'token' until it hits a '/'
            while (getline(ss, token, '/')) {
                // Ignore empty tokens (happens if the string starts with '/' or has consecutive slashes)
                if (token.empty()) {
                    continue; 
                } 
                // Go up one directory
                else if (token == "..") {
                    if (!path_stack.empty()) {
                        path_stack.pop_back();
                    }
                } 
                // Go down into a directory
                else {
                    path_stack.push_back(token);
                }
            }
        }
    }
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