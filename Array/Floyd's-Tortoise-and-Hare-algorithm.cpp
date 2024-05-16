// https://leetcode.com/problems/find-the-duplicate-number/solutions/5139924/video-floyd-s-tortoise-and-hare-algorithm-and-prove-it-with-simple-calculation/

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast=nums[0];
        int slow=nums[0];
        while(true){
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast) break;
        }
        fast=nums[0];
        while(true){
            if(slow==fast) return slow;
            slow=nums[slow];
            fast=nums[fast];
        }
    }
};
