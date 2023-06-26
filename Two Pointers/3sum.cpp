// Problem Statement: https://leetcode.com/problems/3sum/
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target=0;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        set<vector<int>>s;
        vector<vector<int>>out;
        for(int i=0;i<=n-1;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum<target) j++;
                else k--;
            }
        }
        for(auto x: s){
            out.push_back(x);
        }
        return out;
    }
};
