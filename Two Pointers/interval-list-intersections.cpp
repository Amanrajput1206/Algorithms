// Problem Statement: https://leetcode.com/problems/interval-list-intersections/
// You are given two lists of closed intervals, firstList and secondList, where firstList[i] = [starti, endi] and secondList[j] = [startj, endj]. Each list of intervals is pairwise disjoint and in sorted order.

// Return the intersection of these two interval lists.

// A closed interval [a, b] (with a <= b) denotes the set of real numbers x with a <= x <= b.

// The intersection of two closed intervals is a set of real numbers that are either empty or represented as a closed interval. For example, the intersection of [1, 3] and [2, 4] is [2, 3].

class Solution {
public:
vector<int> ans;
vector<vector<int>> v;
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        recurse(firstList, secondList, 0, 0);
        return v;
    }
public:
    void recurse(vector<vector<int>>& firstList, vector<vector<int>>& secondList, int i, int j){
        if(i >= firstList.size() or j >= secondList.size()){ //checking if if have reached the end of list
            return;
        }
        //let L1=(a,b) and L2=(c,d) then if c<=b and a<=d then only intersection is possible i.e second interval is starting before the end of first and First Interval is starting before the end of Second.
        if(secondList[j][0] <= firstList[i][1] and (firstList[i][0] <= secondList[j][1])){ 
            
            // checking whether our pointers are in bounds with respect to each other or intersection is possible or not.
                ans.push_back(max(firstList[i][0], secondList[j][0]));
                ans.push_back(min(firstList[i][1], secondList[j][1]));
                v.push_back(ans);
                ans.clear();
        }
        //if the seond interval has ended then update it to next interval i.e j=j+1, else update the first interval.
        if(firstList[i][1] > secondList[j][1])  j += 1;
        else i += 1; // moving the pointer based on the largest end value.
        recurse(firstList, secondList, i, j); // Calling recursive function.
    }
};
