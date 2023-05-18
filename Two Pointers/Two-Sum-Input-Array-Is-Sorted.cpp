// Problem Statement: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/?envType=study-plan&id=algorithm-i

// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// Your solution must use only constant extra space.

class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        for(int i=0;i<num.size();i++){
            int x  =  num[i];
            int s=i+1,e=num.size()-1;
            while(s<=e){
                int mid=s+(e-s)/2;
            if(x+num[mid]==target){
                return {i+1,mid+1};
            }
            else if(num[mid]+x>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
            }

        }
        return {-1,-1};
    }
};

