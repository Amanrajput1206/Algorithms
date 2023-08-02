// Problem Statement: https://leetcode.com/problems/subsets-ii/description/?envType=study-plan&envId=algorithm-ii&plan=algorithm
// Given an integer array nums that may contain duplicates, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.
class Solution {
public:
    set<vector<int>>st;
    vector<int> output;
    void subset(vector<int>& nums, int index){
        st.insert(output);
        for(int i=index;i<nums.size();i++){
            output.push_back(nums[i]);
            subset(nums,i+1);
            output.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        subset(nums, 0);
        vector<vector<int>>ans;
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};
