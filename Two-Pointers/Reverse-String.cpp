// Problem Statement: https://leetcode.com/problems/reverse-string/?envType=study-plan&id=algorithm-i

// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

class Solution {
public:
    void reverseString(vector<char>& s) {
       int n = s.size();
       vector <char> arr=s;
       for(int i=0;i<n;i++){
           s[i]=arr[n-i-1];
       } 
       return;
    }
};
