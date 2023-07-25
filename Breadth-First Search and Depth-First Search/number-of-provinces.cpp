// problem statement: https://leetcode.com/problems/number-of-provinces/

// There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.
// A province is a group of directly or indirectly connected cities and no other cities outside of the group.
// You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.
// Return the total number of provinces.

// REMARK: What we are basically doing is that we are creating a visited array whose size is equal to the number of nodes and initially all the nodes will be unvisited (0). Then we begin with the first (0th) node and run a for loop iterating over that row in the adjacency matrix to find out with which nodes is that particular node connected with and mark all the nodes as visited (1) in the visited array, also we need to call the dfs for each connected node so that we can find out all the nodes that the connected node is connected with and so on. This will form one province, The next iteration of the for loop will keep finding provinces until there are no unvisited nodes and add them to the count of provinces.

// So basically we are not traversing the adjacency matrix, we are traversing the vis array and then using dfs on the adjacency matrix to find all the nodes connected to that node.

// Time complexity : O(n2) since we are traversing each node of a square matrix
// Space Comlexity : O(n) since we are using a vector vis with the size of the number of nodes.

class Solution {
public:
//function for depth first search, marking all the visited nodes as 1, if they are present in the adjacency matrix row of that node.
void dfs(int curr,vector<vector<int>>& isConnected, vector<int>& vis,int v){
    vis[curr]=1;
    for(int i=0;i<v;i++){
        if(isConnected[curr][i]==1 and vis[i]==0){
            dfs(i,isConnected,vis,v);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v= isConnected.size();
        int province=0;
        vector<int> vis(v,0);
//checking each node and if it is unvisited then it must be a new province and then search the nodes connected to that node using the dfs of adjacency matrix.
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                province++;
                dfs(i,isConnected,vis,v);
            }
        }
        return province;
    }
};
