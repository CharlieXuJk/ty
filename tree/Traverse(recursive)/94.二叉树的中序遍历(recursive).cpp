/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void Traverse(TreeNode* p,vector<int> &ans){
        if(p == nullptr){
            return;
        }
        Traverse(p->left,ans);
        ans.push_back(p->val);
        Traverse(p->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        Traverse(root, ans);
        return ans;
    }
  
};

