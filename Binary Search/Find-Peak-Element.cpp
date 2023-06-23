// Problem Statement: https://leetcode.com/problems/find-peak-element/
// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

// You must write an algorithm that runs in O(log n) time.

// REMARK: In the solution you will narrow down the search area by calulating mid and then you just need to find which side of the array will the potential peak element by checking with it's immediate next element. Finally when the left and right values coincide, both the conditions will be satisfied and the element will be the peak element in it's immediate neighbourhood.

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int mid=left+(right-left)/2;
        while(left<right){
            mid=left+(right-left)/2;
            if(nums[mid]>nums[mid+1]){
                right=mid;
            }
            else left=mid+1;
        }
        return left;

    }
};
