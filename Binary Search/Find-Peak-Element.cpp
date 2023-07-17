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

// The logic behind the code is based on the observation that if we start from any point in the vector and move towards the higher value, eventually we will reach a peak element.

// The binary search approach used in this code takes advantage of the fact that we can determine the direction of the peak element by comparing the current element (`nums[mid]`) with its adjacent element (`nums[mid+1]`). Based on this comparison, we can update the search range to narrow down the potential location of the peak.

// Here's a step-by-step breakdown of the logic:

// 1. Initialize `left` and `right` as the first and last indices of the vector.
// 2. Calculate the initial `mid` as the middle index using the formula `left + (right - left) / 2`.
// 3. Enter the while loop, which continues until `left` becomes equal to or greater than `right`. This condition implies that we have narrowed down the search range to a single element, which is a peak element.
// 4. Inside the loop, update `mid` using the same formula as in step 2.
// 5. Compare `nums[mid]` with `nums[mid+1]`:
//    - If `nums[mid]` is greater than `nums[mid+1]`, it means we are on a decreasing slope, and a peak element is likely to the left. So, we update `right = mid` to restrict the search range to the left half, including `mid`.
//    - If `nums[mid]` is less than or equal to `nums[mid+1]`, it means we are on an increasing slope, and a peak element is likely to the right. So, we update `left = mid + 1` to exclude `mid` from the search range and focus on the right half.
// 6. Repeat steps 4 and 5 until the while loop condition is met.
// 7. Finally, when `left` is equal to `right`, it represents the index of the peak element. Return `left` as the result.

// By iteratively narrowing down the search range in logarithmic time complexity, the code efficiently finds a peak element in the vector.
