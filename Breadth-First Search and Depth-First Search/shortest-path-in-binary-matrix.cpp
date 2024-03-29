// Problem Statement: https://leetcode.com/problems/shortest-path-in-binary-matrix/description/
// Given an n x n binary matrix grid, return the length of the shortest clear path in the matrix. If there is no clear path, return -1.

// A clear path in a binary matrix is a path from the top-left cell (i.e., (0, 0)) to the bottom-right cell (i.e., (n - 1, n - 1)) such that:

// All the visited cells of the path are 0.
// All the adjacent cells of the path are 8-directionally connected (i.e., they are different and they share an edge or a corner).
// The length of a clear path is the number of visited cells of this path.

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        //if first and last cell are 1 then path is not possible
        if(grid[0][0] == 1)
            return -1;
        int s = grid.size();
        if(grid[s-1][s-1] != 0)
            return -1;
        //Create a queue and push the initial coordiates along with the path length and mark it -1. Then apply 8 dimensional bfs for the adjacent cells with 0 and keep marking them -1. 
        queue<pair<pair<int, int>, int>> q;
        q.push({{0, 0}, 1});
        grid[0][0] = -1;

        int drow[] = {-1, 0, +1, 0, 1, -1, -1, 1};
        int dcol[] = {0, 1, 0, -1, 1, 1, -1, -1}; 

        while(!q.empty()){
            auto val = q.front();
            int i = val.first.first;
            int j = val.first.second;
            int path = val.second;
            q.pop();
        //path will end if it reaches the last cell
            if(i == s-1 && j == s-1)
                return path;

            for(int idx=0;idx<8;idx++){
                int row = i + drow[idx];
                int col = j + dcol[idx];
            //if the point is within bounds and it's value is 0 then make it -1 and add it to the path and push it in the queue for further bfs
                if(row >= 0 && row < s && col >= 0 && col < s && grid[row][col] == 0){
                    grid[row][col] = -1;
                    q.push({{row, col}, path+1});
                }
            }
        }

        return -1;
    }
};
