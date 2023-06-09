//Problem Statement: https://leetcode.com/problems/max-area-of-island/?envType=study-plan&id=algorithm-i

// You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) 

// You may assume all four edges of the grid are surrounded by water.

// The area of an island is the number of cells with a value 1 in the island.

// Return the maximum area of an island in grid. If there is no island, return 0.

class Solution {

int dfs(vector<vector<int>>& grid,int i,int j){
            if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j]!=1){
                return 0;
            }
            grid[i][j]=2;
            return (1+dfs(grid,i+1,j)+dfs(grid,i-1,j)+dfs(grid,i,j+1)+dfs(grid,i,j-1));
        }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
      int r = grid.size();
      int c = grid[0].size();
      int result=0;
      for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
              if(grid[i][j]==1) result = max(result,dfs(grid,i,j));
          }
      } 
      return result;
    }
};
