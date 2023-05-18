//Question: [Longest-Substring-without-repeating-characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/?envType=study-plan&id=algorithm-i)
// Given a string s, find the length of the longest substring without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int n=s.size();
        int length=0;
        vector<int> map(256,-1);
        while(right<n){
        if(map[s[right]]!=-1){
            left=max(map[s[right]]+1,left);
        }
        
        map[s[right]]=right;
        length=max(length,right-left+1);
        right++;
        }
        return length;

    }
};
