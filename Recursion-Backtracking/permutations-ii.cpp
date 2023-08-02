// Problem statement: https://leetcode.com/problems/permutations-ii/

// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

class Solution {
public:
    void solve(vector<int>& nums, int index, vector<vector<int>>& ans){
        //base case to end. Since it is permutation and not subset, we need to make sure that the length of the intermediate array is equal to the length of the actual array.
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            //either swap or don't swap
            swap(nums[index],nums[i]);
            solve(nums, index+1,ans);
            //backtrack i.e reverse the swap
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> out;
        vector<vector<int>> ans;
        int index=0;
        // create a map for handling duplicates
        map<vector<int>,int> mp;
        solve(nums,index,ans);
        for(int i=0; i<ans.size();i++){
            mp[ans[i]]++;
        }
      //add each unique entry back in the output
        for(auto & it:mp){
            out.push_back(it.first);
        }
        return out;
    }
};
