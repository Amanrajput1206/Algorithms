// Problem statement: https://leetcode.com/problems/subarray-product-less-than-k/
// Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int prod=1;
        int count=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            prod*=nums[j];
            while(prod>=k){
                prod/=nums[i];
                i++;
            }
            count+=j-i+1;
        }
        return count;
    }
};
