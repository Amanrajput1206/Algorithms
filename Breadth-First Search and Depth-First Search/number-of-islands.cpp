// Problem Statement: https://leetcode.com/problems/number-of-islands/
// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

class Solution {
public:
// this function will reutrn true if either all the adjaccent nodes are visited or are surrounded by water
    bool checkIsland(vector<vector<char>>& grid, int i, int j){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()) return true;
        if(grid[i][j]=='0') return true;
        // mark the visited
        grid[i][j]='0';
        //check all adjacent
        bool p=checkIsland(grid,i+1,j), q=checkIsland(grid,i-1,j), r=checkIsland(grid,i,j+1),s=checkIsland(grid,i,j-1);
        return (p && q && r && s);
    }
    int numIslands(vector<vector<char>>& grid) {
        int k=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1') if(checkIsland(grid,i,j)) k++;
            }
        }
        return k;
    }
};
