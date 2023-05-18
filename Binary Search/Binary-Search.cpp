// Problem Statement: https://leetcode.com/problems/binary-search/?envType=study-plan&id=algorithm-i

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int search(vector<int>& nums, int target){
     int l = 0;
     int r = nums.size()-1;
     int mid = (l+r)/2;
     while(l<=r){
        if(nums[mid]==target)
            return mid;
        if(target>nums[mid])
            l=mid+1;
        else if(target<nums[mid])
            r=mid-1;
        mid=(l+r)/2;
     }
        return -1;
   }   
};
