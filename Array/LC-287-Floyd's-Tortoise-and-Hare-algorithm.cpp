// you can do it naively using nested loops or extra space. key to do it optimally is to see it as a linked list rather than an array. The value at the indices point to the next index. Now you can use the hare and tortoise approach, similar to how you'd find the intersection in a linked list. Here is the mathematical magic (or rather a trick) of Floyd's algorithm: when the Tortoise and Hare meet inside the cycle, the distance from the start of the list to the cycle entrance is exactly equal to the distance from the meeting point to the cycle entrance. Hence if slow and fast collide, we know there is a cycle, and when they collide, we can be sure of where it happens relatively and we use this knowledge for this problem.

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

    int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;
        
        do{
            slow = nums[slow];
            fast=nums[nums[fast]];
        }
        while(slow!=fast);

        slow = 0;
        
        while (slow != fast) {
            slow = nums[slow]; 
            fast = nums[fast];
        }
        
        return slow;
    }

int main() {
    fastio

    int tc = 1; // Number of test cases
    // cin >> tc;
    vector<int>nums = {2,5,9,6,9,3,8,9,7,1};
    while (tc--) {
        int ans = findDuplicate(nums);
        cout<<ans;
    }
    return 0;
}