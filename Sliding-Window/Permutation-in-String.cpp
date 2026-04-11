// Problem Statement: https://leetcode.com/problems/permutation-in-string/?envType=study-plan&id=algorithm-i

// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of s2.

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp;
        for(auto it:s1){
            mp[it]++;
        }
        int i = 0,j = 0;
        int count = mp.size();
        int k = s1.size();
        while(j<s2.size()){
            if(mp.find(s2[j])!=mp.end()){
                mp[s2[j]]--;
                if(mp[s2[j]]==0){
                    count--;
                }
            }

            if(j-i+1<k){
                j++;
            }

            else if(j-i+1==k){
                if(count==0){
                    return true;
                }
                if(mp.find(s2[i])!=mp.end()){
                    mp[s2[i]]++;
                    if(mp[s2[i]]==1){
                        count++;
                    }
                }
            i++;
            j++;
            }
        }
        return false;
    }
};
