// Probelm Statement: https://leetcode.com/problems/find-all-anagrams-in-a-string/
// Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

class Solution {
public:
// create a function to check the frequency of each character
        bool isAnagram(vector<int> &u, vector<int> &v){
            for(int i=0;i<26;i++){
                if(u[i]!=v[i]){
                    return false;
                }
            }
            return true;
        }
    vector<int> findAnagrams(string s, string p) {
        vector<int> v(26,0);
        vector<int> ans;
        vector<int> u(26,0);
        int l=p.length();
        // enter the frequency of each character in string p in vector v
        // the value is subtracted from a to keep the values relative to a  so that it stays between 0-25
        for(auto x:p) v[x-'a']=v[x-'a']+1;
        int i=0,j=0;
        while(j<s.length()){
            // enter the frequency of the characters each time the loop runs to make a window of length of p
            u[s[j]-'a']=u[s[j]-'a']+1;
            // if it matches window size then check if anagram
            if(j-i+1==l){
                if(isAnagram(u,v)) ans.push_back(i);
            }
            // if window size is not reached increase the size
            if(j-i+1<l) j++;
            // if window size exceeds then slide it and remove the element out of current window
            else{
                u[s[i]-'a'] = u[s[i]-'a']-1;
                i++;
                j++;
            }
        }
        return ans;
    }
};
