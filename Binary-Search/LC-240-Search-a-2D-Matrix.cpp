

#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
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

bool searchMatrix(vector<vector<int>> &matrix, int target) {
  int rows = (int)matrix.size();
  int cols = (int)matrix[0].size();
  int row = 0;
  int col = cols - 1;
  while (row < rows && col > -1) {
    if (matrix[row][col] == target) {
      return true;
    } else if (matrix[row][col] > target) {
      col--;
    } else {
      row++;
    }
  }
  return false;
}

void solve(vector<vector<int>> matrix, int target) {
  // Write Code here
  bool ans = searchMatrix(matrix, target);
  cout << ans << '\n';
}

int main() {
  fastio vector<vector<int>> matrix = {{1, 4, 7, 11, 15},
                                       {2, 5, 8, 12, 19},
                                       {3, 6, 9, 16, 22},
                                       {10, 13, 14, 17, 24},
                                       {18, 21, 23, 26, 30}};
  int target = 5;
  int tc = 1; // Number of test cases
  // cin >> tc;

  while (tc--) {
    solve(matrix, target);
  }

  return 0;
}
