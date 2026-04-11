// Problem Statement: https://leetcode.com/problems/reverse-words-in-a-string-iii/?envType=study-plan&id=algorithm-i

// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

class Solution {
public:
    void reverse(string& s,int left,int right){
        while(left<right){
            swap(s[left++],s[right--]);
        }
    }
        string reverseWords(string s){

            int left=0;
            int right=0;
            while(right<s.size()){
            while(right<s.size() && s[right]!=' '){
                right++;
            }
            reverse(s,left,right-1);
            right++;
            left=right;

        }
        return s;
    }
    
      

};
