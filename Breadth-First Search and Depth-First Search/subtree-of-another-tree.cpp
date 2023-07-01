// Problem Statement: https://leetcode.com/problems/subtree-of-another-tree/

// Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

// A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. The tree tree could also be considered as a subtree of itself.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
//function to compare the trees from the given node
    bool dfs(TreeNode* root, TreeNode* subRoot){
        //Base case that will end the recursion
        if(root==NULL and subRoot==NULL) return true;
        if(root==NULL or subRoot==NULL) return false;
        if(root->val!=subRoot->val) return false;
        return dfs(root->left,subRoot->left) && dfs(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        //start checking in the tree
        if(!root) return false;
        //return true if the subtree is found from the first node itself
        if(dfs(root,subRoot)) return true;
        //if not then start the search recursively in the left and right subtree and return true if the tree is found in either left or right of the root
        return isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);

    }
};
