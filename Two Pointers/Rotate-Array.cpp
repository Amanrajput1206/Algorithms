// Problem Staement: https://leetcode.com/problems/rotate-array/?envType=study-plan&id=algorithm-i

// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> Array=nums;
        for(int i=0;i<nums.size();i++){
            nums[(i+k)%nums.size()]=Array[i];
        }
    }
};
