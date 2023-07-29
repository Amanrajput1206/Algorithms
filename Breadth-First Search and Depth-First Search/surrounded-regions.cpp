// Problem Statement: https://leetcode.com/problems/surrounded-regions/

// Given an m x n matrix board containing 'X' and 'O', capture all regions that are 4-directionally surrounded by 'X'.

// A region is captured by flipping all 'O's into 'X's in that surrounded region.

// REMARK: in this solution we first change the 0s that we cannot change to 1 then we change all the remaining 0s that can be changed to X and finally we change the Os that we supposed to be unchanged back to 0.

class Solution {
public:
    int n,m;
    void bfs(vector<vector<char>>& board,int x,int y)
    {
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        queue<pair<int,int>> q;
        q.push({x,y});
        while(!q.empty())
        {
            int currX = q.front().first;
            int currY = q.front().second;
            q.pop();
            board[currX][currY] = '1';
            for(int a=0;a<4;a++)
            {
                if(currX+dx[a] >=0 && currX+dx[a]<n && currY+dy[a] >=0 && currY+dy[a]<m)
                {
                    if(board[currX+dx[a]][currY+dy[a]]=='O')
                    {
                        board[currX+dx[a]][currY+dy[a]] = '1';
                        q.push({currX+dx[a],currY+dy[a]});
                    }
                }
            }

        }
    }
    void solve(vector<vector<char>>& board) {
        n= board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            if(board[i][0]=='O')
                bfs(board,i,0);
            if(board[i][m-1]=='O')
                bfs(board,i,m-1);
        }

        for(int i=0;i<m;i++)
        {
            if(board[0][i]=='O')
                bfs(board,0,i);
            if(board[n-1][i]=='O')
                bfs(board,n-1,i);
        }


        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(board[i][j]=='1')
                    board[i][j] = 'O';
                else if(board[i][j]=='O')
                    board[i][j] = 'X';
    }
};
