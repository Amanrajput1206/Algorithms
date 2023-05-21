//Problem Statement: https://leetcode.com/problems/flood-fill/?envType=study-plan&id=algorithm-i
// An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

// You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].

// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

class Solution {
private:
void helper(vector<vector<int>>&image,int i,int j,int curr,int color, int n,int m){
    if(i<0 or i>=n or j<0 or j>=m){
        return;
    }
    if(image[i][j]== color){
        return;
    }
    if(image[i][j]== curr){
        image[i][j]=color;
        helper(image,i,j+1,curr,color,n,m);
        helper(image,i+1,j,curr,color,n,m);
        helper(image,i-1,j,curr,color,n,m);
        helper(image,i,j-1,curr,color,n,m);
        
    }
    return;
}
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int temp = image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        helper(image,sr,sc,temp,color,n,m);
        return image;
    }
};
