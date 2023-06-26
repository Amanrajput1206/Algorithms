// Problem Statement: https://leetcode.com/problems/backspace-string-compare/
// Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.
// Note that after backspacing an empty text, the text will continue empty.

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        string s1="",t1="";
        for(auto it:s)
        {
            if(it!='#')
            {
            st.push(it);
            continue;
            }
            if(!st.empty()) st.pop();
        }
        while(!st.empty())
        {
            s1+=st.top();
            st.pop();
        }
        for(auto it:t)
        {
            if(it!='#')
            {
                st.push(it);
                continue;
            }
            if(!st.empty()) st.pop();
        }
        while(!st.empty())
        {
            t1+=st.top();
            st.pop();
        }
        return s1==t1;
    }
};
  
