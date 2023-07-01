// Problem Statement: https://leetcode.com/problems/minimum-size-subarray-sum/description/

// Given an array of positive integers nums and a positive integer target, return the minimal length of a 
// subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
       int sum=0;
       int ans=n+1;
       int j=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>=target){
                ans=min(ans,(i-j+1));
                while(sum>=target){
                    sum-=nums[j];
                   
                    ans=min(ans,(i-j+1));
                    j++;
                }
             
            }
 
        }
        if(ans==n+1) ans=0;
        return ans;
    }
};
