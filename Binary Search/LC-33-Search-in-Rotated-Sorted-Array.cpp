// ALT - LC-81(Search in Rotated Sorted Array II)
// The point is that one half of the array will always be sorted and the other half will always contain the pivot. Not if nums[mid] > nums[lo] then left half is surely sorted and if nums[mid]==nums[lo] then also it is baically sorted in non-decreasing order. Otherwise the right side is considered sorted.

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
// Searching in a sorted but Rotated Array. The array is now divided into two sorted parts. 
int search(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
// <= because we are handling the found case separately
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;

            if(nums[mid]==target){
                return mid;
            }
// need to check in which half of the sorted array we are present. The outer check is needed because we don't know which part is completely sorted and which part has the pivot point in it. We can check if the target lies in the sorted part because that's the only reliable check we can do, if the check fails, then the target is surely in the other half.

            //check if left is sorted
            if(nums[mid]>=nums[lo]){
                //check if target is in the sorted half.
                if(target<nums[mid] && target>=nums[lo]){
                    hi=mid-1;
                }

                //go to unsorted half
                else{
                    lo=mid+1;
                }
            }

            //left is not sorted, right is sorted.
            else{
                if(target>nums[mid] && target<=nums[hi]){
                    lo=mid+1;
                }
                //go to unsorted half
                else hi=mid-1;
            }
        }
        return -1;
}

int main() {
    fastio
    
    int tc = 1; // Number of test cases
    // cin >> tc;

    while (tc--) {
        vector<int>nums = {4,5,6,7,0,1,2};
        int target =0;
        int ans = search(nums,target);
        cout<<"index of "<<target<<" is "<<ans;
    }

    return 0;
}
