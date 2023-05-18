// Problem Statement: https://leetcode.com/problems/squares-of-a-sorted-array/?envType=study-plan&id=algorithm-i

// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector <int> Array;
       for(int i=0;i<nums.size();i++){
           Array.push_back(nums[i]*nums[i]);
       }
       sort(Array.begin(),Array.end());
       return Array;

    }
};
